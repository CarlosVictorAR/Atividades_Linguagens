module.exports = function(app){
    //cadastrar
    app.get("/formulario_cadastro_noticia", function(req,res){
        app.app.controllers.admin.formulario_cadastro_noticia(app,req,res);
    });
    app.post("/inserir", function(req,res){
       app.app.controllers.admin.inserir(app,req,res);
    });

    // deletar 
    app.get('/delete_noticia',function(req,res){
        app.app.controllers.admin.delete_noticia(app,req,res);
    });
    app.get('/delete', function(req,res){
        app.app.controllers.admin.delete(app,req,res);
    });
}