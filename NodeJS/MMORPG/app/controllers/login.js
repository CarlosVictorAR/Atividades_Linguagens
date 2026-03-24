const bcrypt = require(`bcryptjs`);
module.exports.login = (application, req, res)=>{
    if (req.session && req.session.usuario){
        return res.redirect('/jogo');
    }
    res.render('login');
}

module.exports.entrar = async(application, req, res)=>{
    try{ 
        const {usuario, senha} = req.body;
        const connection = application.config.dbConnection;
        const UsuarioDAO = new application.app.models.UsuariosDAO(connection, application);
        const dadosUsuario = await UsuarioDAO.buscarPorUsuario(usuario);
        if (dadosUsuario){
            /*validação*/
            const senhaValida = await bcrypt.compare(senha, dadosUsuario.senha);
            if (!senhaValida) return res.status(400).json({
                errors: [{message:"Senha Invalida"}],
                status: 400
            });
            req.session.usuario = {/*Usuario*/
                id: dadosUsuario._id, 
                usuario: dadosUsuario.usuario,
                nome: dadosUsuario.nome,
                casa: dadosUsuario.casa
            };
            return res.status(200).json({
                message: "Usuario encontrado",
                status: 200,
            });
            /* */
        }
        res.status(400).json({
            errors: [{message: "Usuario não existente"}],
            status: 400
        })
    }
    catch (err){
        res.status(500).json({
            error: 'Internal Server Error',
            message: err && err.message ? err.message : 'Erro inesperado no login',
            status: 500
        });
    }
}

module.exports.sair = (application, req, res) => {
    req.session.destroy((err) => {
        if (err) {
            console.error('Erro ao destruir sessão:', err);
            return res.status(500).send('Erro interno do servidor');
        }
        res.redirect('/login');
    });
}