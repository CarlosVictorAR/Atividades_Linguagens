
module.exports.cadastro = function(application,req,res){
    res.render('cadastro',{validation : {}, dados : {}});
}

module.exports.cadastrar = async function(application,req,res){
    let dados = req.body;
    req.assert('nome',"Nome não pode ser vazio").notEmpty();
    req.assert('senha',"Senha não pode ser vazio").notEmpty();
    req.assert('usuario',"Usuario não pode ser vazio").notEmpty();
    req.assert('casa',"Casa não pode ser vazio").notEmpty();
    let errors = req.validationErrors();
    if (errors){
        res.render('cadastro',{validation : errors, dados : dados});
        return;
    }
    let connection = application.config.dbConnection;
    let UsuariosDAO = new application.app.models.UsuariosDAO(connection);
    UsuariosDAO.inserirUsuario(dados);

    res.send('oi');
}