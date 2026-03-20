function UsuariosDAO(connection,application){
    this._connection = connection();
    this._application = application;
    this._model = this._application.app.models.model;

}
UsuariosDAO.prototype.inserirUsuario = async function(usuario){
    try{
        let User = await this._model.create({
            nome: usuario.nome,
            senha: usuario.senha,
            usuario: usuario.usuario,
            casa: usuario.casa
        });
        return User;
    }
    catch (err){
        return {
            error: "E_Error",
            message: err.msg
        };
    }
}
module.exports = function(){
    return UsuariosDAO;
}