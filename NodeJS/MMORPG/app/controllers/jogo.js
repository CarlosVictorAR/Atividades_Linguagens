module.exports.jogo = async (application,req,res)=>{
    try{
        const connection = application.config.dbConnection;
        const UsuarioDAO = new application.app.models.UsuariosDAO(connection, application);
        const usuario = await UsuarioDAO.buscarPorId(req.session.usuario.id);
        res.render('jogo', {data: usuario});
    }
    catch(err){
        res.redirect('/login');
    }
}