module.exports.login = (application, req, res)=>{
    res.render('login');
}

module.exports.entrar = async(application, req, res)=>{
    try{ 
        const {usuario, senha} = req.body;
        /*adicionar validação*/
        /* */
        const connection = application.config.dbConnection;
        const UsuarioDAO = new application.app.models.UsuariosDAO(connection, application);
        const dadosUsuario = await UsuarioDAO.buscarPorUsuario(usuario);
        if (dadosUsuario){
            res.status(200).json({
                message: "Usuario encontrado"
            });
        }
        else {
            throw Error('Erro no login');
        }
    }
    catch (err){
        res.status(500).json({
            error: 'Internal Server Error',
            message: err && err.message ? err.message : 'Erro inesperado no login'
        });
    }
}