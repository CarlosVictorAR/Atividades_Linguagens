module.exports.formulario_cadastro_noticia = function (app, req, res){
    res.render('admin/formulario_cadastro_noticia', {validator : {}, noticia: {}});
}

module.exports.inserir = function (app, req, res){
     let connection = app.config.dbConnection();
        let NoticiasDAO = new app.app.models.NoticiasDAO(connection);
        let noticia = req.body;
        req.assert('titulo','Titulo é obrigatorio').notEmpty();
        req.assert('resumo','Resumo é obrigatorio').notEmpty();
        req.assert('resumo','Resumo deve ter entre 10 a 100 caracteres').len(10,100);
        req.assert('autor','Nome do autor é obrigatorio').notEmpty();
        req.assert('data','Data é obrigatorio').notEmpty().isDate({format: 'YYYY-MM-DD'});
        req.assert('noticia','Noticia é obrigatório').notEmpty();

        let erros = req.validationErrors();
        if (erros){
            res.render('admin/formulario_cadastro_noticia', {validator : erros, noticia : noticia});
            return;
        }

        NoticiasDAO.cadastrarNoticia(noticia, function(error, result){
            if(error){
                console.log('Error:' + error);
                return;
            }
            res.redirect("/");
        })
}

module.exports.delete_noticia = function (app, req, res){
     let connection = app.config.dbConnection();
        let NoticiasDAO = new app.app.models.NoticiasDAO(connection);
        NoticiasDAO.getNoticias(function(error, result){
            res.render('admin/delete_noticia',{noticia: result});
        })
}

module.exports.delete = function (app, req, res){
    let connection = app.config.dbConnection();
        let NoticiasDAO = new app.app.models.NoticiasDAO(connection);
        let id = req.query.id;
        NoticiasDAO.deleteNoticia(id,function(){
            res.redirect("/delete_noticia");
        });
}