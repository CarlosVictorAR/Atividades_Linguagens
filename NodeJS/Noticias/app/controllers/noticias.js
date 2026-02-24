
module.exports.noticia = function (app, req, res){
    let connection = app.config.dbConnection();
        id = req.query.id;
        connection.query(`select * from noticia where id='${id}'`, function(error, result){
            res.render("noticias/noticia", {noticia: result});
        });
}

module.exports.home = function (app, req, res){
    let connection = app.config.dbConnection();
        let NoticiasDAO = new app.app.models.NoticiasDAO(connection);
        NoticiasDAO.getNoticias(function(error, result){
            res.render("noticias/noticias", {noticia: result});
        });
}