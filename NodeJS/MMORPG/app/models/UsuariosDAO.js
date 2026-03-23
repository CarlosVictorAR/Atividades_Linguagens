let bcrypt = require('bcryptjs');
function UsuariosDAO(connection,application){
    this._connection = connection();
    this._application = application;
    this._model = this._application.app.models.model;

}
UsuariosDAO.prototype.inserirUsuario = async function(usuario){
    try{
        let salt = await bcrypt.genSalt(10);
        let senhaHash = await bcrypt.hash(usuario.senha, salt);
        let User = await this._model.create({
            nome: usuario.nome,
            senha: senhaHash,
            usuario: usuario.usuario,
            casa: usuario.casa
        });
        return User;
    }
    catch (err){
        return {
            error: "E_Error",
            message: err.message,
            code: err.code
        };
    }
}
module.exports = function(){
    return UsuariosDAO;
}