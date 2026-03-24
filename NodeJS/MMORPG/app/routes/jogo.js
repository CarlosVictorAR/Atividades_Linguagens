let auth = require('../middlewares/auth');
module.exports = function(application){
    application.get('/jogo', auth, (req,res)=>{
        application.app.controllers.jogo.jogo(application,req,res);
    })
    application.post('/acao/recrutar', auth, (req,res)=>{
        application.app.controllers.jogo.recrutarAldeao(application,req,res);
    })
}