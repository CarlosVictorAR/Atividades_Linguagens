
module.exports.cadastro = function(application,req,res){
    res.render('cadastro');
}

module.exports.cadastrar = async function(application,req,res){
    try{
        let usuario = req.body;
        /*Validação*/
        let erros = [];
        if (!usuario.nome || usuario.nome.trim() === ''){
            erros.push({message: "Nome não pode ser vazio"});
        }
        else if (usuario.nome.length > 20){
            erros.push({message: "Nome deve ter no máximo 20 caracteres"});
        }

        if (!usuario.usuario || usuario.usuario.trim() === ''){/*Se o usuario não for vazio ele valida o tamanho*/
            erros.push({message: "Usuario não pode ser vazio"});
        } 
        else if(usuario.usuario.length < 5) {
            erros.push({message: "Usuario deve ter pelo menos 5 letras"});
        }

        if (!usuario.casa || usuario.casa.trim() === '') {
            erros.push({message: "Escolha uma casa"});
        }
        
        if (!usuario.senha || usuario.senha.trim() === ''){
            erros.push({message: "Senha não pode ser vazia"});
        }
        else if (usuario.senha.length < 8) {
            erros.push({message: "Senha deve ter pelo menos 8 letras"});
        }

        if (erros.length > 0){//Para se der erro
            return res.status(400).json({ errors: erros });
        }
        let connection = application.config.dbConnection;
        let UsuariosDAO = new application.app.models.UsuariosDAO(connection, application);
        let response = await UsuariosDAO.inserirUsuario(usuario);
        if (response && response.nome){ /*se existir user aqui ele envia o objeto criado com sucesso*/
            res.status(201).json({
                message: 'Criado com sucesso',
                status: 201,
                body: response
            })
        }
        else if (response && response.code === 11000) {
            return res.status(409).json({
                errors: [{ message: 'Usuário já cadastrado' }]
            });
        }
        else {
            throw response;
        }
    }
    catch (err){
        res.status(500).json({
            error: 'Internal Server Error',
            message: err && err.message ? err.message : 'Erro inesperado no cadastro'
        });
    }

}