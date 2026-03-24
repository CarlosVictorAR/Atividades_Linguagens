
module.exports.jogo = async (application,req,res)=>{
    const CUSTO_RECRUTAR = application.config.gameConfig.custos.RECRUTAR_ALDEAO;
    try{
        const connection = application.config.dbConnection;
        const UsuarioDAO = new application.app.models.UsuariosDAO(connection, application);
        const usuario = await UsuarioDAO.buscarPorId(req.session.usuario.id);
        res.render('jogo', {data: usuario, custoRecrutamento: CUSTO_RECRUTAR});
    }
    catch(err){
        res.redirect('/login');
    }
}

module.exports.recrutarAldeao = async (application,req,res)=>{
    const CUSTO_RECRUTAR = application.config.gameConfig.custos.RECRUTAR_ALDEAO;
    const GANHO_RECRUTAR = application.config.gameConfig.ganhos.RECRUTAR_ALDEAO;
    try{

        const connection = application.config.dbConnection;
        const UsuarioDAO = new application.app.models.UsuariosDAO(connection, application);
        const usuario = await UsuarioDAO.buscarPorId(req.session.usuario.id);
        if (usuario.ouro < CUSTO_RECRUTAR){
            return res.status(400).json({
                error: "Ouro insuficiente",
                status:400
            });
        }
        
        const atualizado = await UsuarioDAO.atualizarAtributos(usuario.id,{
            ouro: usuario.ouro - CUSTO_RECRUTAR,
            aldeoes: usuario.aldeoes + GANHO_RECRUTAR
        });

        return res.status(200).json({
            ouro: atualizado.ouro,
            aldeoes: atualizado.aldeoes,
            status: 200
        });
    }
    catch(err){
        res.status(500).json({
            error: "Erro interno",
            status: 500
        });
    }
}