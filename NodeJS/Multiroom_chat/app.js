let app = require('./config/server');

//servidor iniciado junto do socketIO
const port = process.env.PORT || 3000;
let servidor = app.listen(port,function(){
    console.log(`Server ON na porta ${port}`);
});
let io = require('socket.io').listen(servidor);

io.on('connect',function(socket){
    console.log("cliente conectou");
    socket.on('registrarApelido', function(apelido){
        socket.apelido = apelido;
    });

    //evento intermediario que envie requisição para atualizar participantes e atualizar as mensagens;
    socket.on('enviarMensagem', function(data){
        socket.apelido = data.apelido;
        if (parseInt(data.apelido_numero_de_participantes) <= 0){
            socket.emit('atualizarParticipantes', data.apelido);
            socket.broadcast.emit('atualizarParticipantes', data.apelido);
            socket.emit('atualizarQuantidade');
        }
        socket.emit('msgParaCliente', {apelido : data.apelido, mensagem : data.mensagem});
        socket.broadcast.emit('msgParaCliente', {apelido : data.apelido, mensagem : data.mensagem});
    });

    //evento que ao desconectar envia a mensagem para todos que desconectou
    socket.on('disconnect', function(){
        socket.broadcast.emit('msgParaCliente', {apelido : socket.apelido, mensagem : ' desconectou-se do chat'});
    });
});

//seto io como global
app.set('io',io);