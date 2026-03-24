let auth = require('../middlewares/auth');
module.exports = function(application){
    application.get('/jogo', auth, function(req,res){
        application.app.controllers.jogo.jogo(application,req,res);
    })
}