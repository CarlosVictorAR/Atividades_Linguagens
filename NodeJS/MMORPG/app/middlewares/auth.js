module.exports = function(req,res, next){/*Autenticação*/
    if (req.session && req.session.usuario){
        return next();
    }
    return res.redirect('/login');
};