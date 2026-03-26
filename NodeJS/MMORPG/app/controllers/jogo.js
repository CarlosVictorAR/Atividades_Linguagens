
module.exports.jogo = async (application,req,res)=>{
    const CUSTO_RECRUTAR = application.config.gameConfig.custos.RECRUTAR_ALDEAO;
    const OURO_POR_ALDEAO = application.config.gameConfig.ganhos.OURO_POR_ALDEAO;
    const USAR_HABILIDADE = application.config.gameConfig.custos.USAR_HABILIDADE;
    try{
        const connection = application.config.dbConnection;
        const UsuarioDAO = new application.app.models.UsuariosDAO(connection, application);
        const usuario = await UsuarioDAO.buscarPorId(req.session.usuario.id);
        res.render('jogo', {data: usuario, custoRecrutamento: CUSTO_RECRUTAR, ouroPorAldeao: OURO_POR_ALDEAO, custoHabilidade: USAR_HABILIDADE});
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
        };
        
        const atualizado = await UsuarioDAO.atualizarAtributos(req.session.usuario.id,{
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

module.exports.coletarOuro = async(application, req, res)=>{
    try{
        const connection = application.config.dbConnection;
        const UsuarioDAO = new application.app.models.UsuariosDAO(connection,application);
        const usuario = await UsuarioDAO.buscarPorId(req.session.usuario.id);
        if (usuario){
            const ouroColetado = usuario.aldeoes * application.config.gameConfig.ganhos.OURO_POR_ALDEAO;
            const atualizado = await UsuarioDAO.atualizarAtributos(usuario.id,{
                ouro: usuario.ouro + ouroColetado
            });
            return res.status(200).json({
                status: 200,
                ouro: atualizado.ouro,
                ouroColetado
            })
        }
    }
    catch(err){
        res.status(500).json({
            status:500,
            error: "Erro no servidor"
        });
    }
}

module.exports.usarHabilidade = async(application, req, res)=>{
    try{
        const gameConfig = application.config.gameConfig;
        const connection = application.config.dbConnection;
        const UsuarioDAO = new application.app.models.UsuariosDAO(connection,application);
        const usuario = await UsuarioDAO.buscarPorId(req.session.usuario.id);
        const custo = gameConfig.custos.USAR_HABILIDADE;
        const ganho = gameConfig.ganhos.HABILIDADE_POR_USO;
        if (usuario){
            if (usuario.ouro < custo){
                return res.status(400).json({
                    status: 400,
                    error: "Ouro insuficiente"
                })
            }
            const atributo = gameConfig.habilidadesPorCasa[usuario.casa];
            if (!atributo){
                return res.status(400).json({
                    status:400,
                    error: "Casa Invalida"
                })
            }
            const atualizado = await UsuarioDAO.atualizarAtributos(usuario.id, {
                ouro: usuario.ouro - custo,
                [atributo]: usuario[atributo] + ganho
            });
            return res.status(200).json({
                ouro: atualizado.ouro,
                atributo,
                valor: atualizado[atributo],
                status: 200
            })
        }
        throw Error();
    }
    catch(err){
        res.status(500).json({
            error: "Erro no servidor",
            status: 500
        })
    }
}