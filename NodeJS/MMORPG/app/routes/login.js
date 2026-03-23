module.exports = function(application){
	application.get('/',function(req,res){
		res.redirect('/login');
	})
	application.get('/login', function(req, res){
		application.app.controllers.login.login(application,req,res);
	});
	application.post('/entrar',function(req,res){
		application.app.controllers.login.entrar(application,req,res);
	})
}