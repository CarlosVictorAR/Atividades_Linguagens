module.exports = function(app){
    app.get("/", function (req,res){
        app.app.controllers.noticias.home(app, req, res);
    });
};