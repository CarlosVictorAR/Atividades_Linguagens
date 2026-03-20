
module.exports.cadastro = function(application,req,res){
    res.render('cadastro',{validation : {}, dados : {}});
}

module.exports.cadastrar = async function(application,req,res){
    try{
        let usuario = req.body;
        //validação
        let connection = application.config.dbConnection;
        let UsuariosDAO = new application.app.models.UsuariosDAO(connection, application);
        let response = await UsuariosDAO.inserirUsuario(usuario);
        if (response.nome){ /*se existir user aqui ele envia o objeto criado com sucesso*/
            res.status(201).json({
                message: 'Criado com sucesso',
                status: 201,
                body: response
            })
        }
        else {
            throw response;
        }
    }
    catch (err){
        res.status(500).json(err);
    }

}