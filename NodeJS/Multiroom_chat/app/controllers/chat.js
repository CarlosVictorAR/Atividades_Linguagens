module.exports.chat = function(application, req, res){
    let dadosForm = req.body;
    req.assert('apelido','Apelido é obrigatório').notEmpty();
    req.assert('apelido','Apelido deve conter entre 3 e 15 caracteres').len(3,15);
    let errors = req.validationErrors();
    if (errors){
        res.render('index',{validacao : errors, dados : dadosForm});
        return;
    }
    let io = application.get('io');
    //qnd renderizar faz uma requisição para o servidor enviar mensagem que conectou
    io.emit('msgParaCliente',{apelido : dadosForm.apelido, mensagem : " conectou-se ao chat"});
    
    res.render('chat',{dados : dadosForm});
}