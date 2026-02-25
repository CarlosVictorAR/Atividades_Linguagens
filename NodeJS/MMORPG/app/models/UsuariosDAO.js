function UsuariosDAO(connection){
    this._connection = connection();
}
   UsuariosDAO.prototype.inserirUsuario = function(usuario){
       const Schema = this._connection.Schema;
       const UsuarioSchema = new Schema({
           nome: { type: String, required: true },
           senha: { type: String, required: true },
           usuario: { type: String, required: true },
           casa: { type: String, required: true }
       });

       const UsuarioModel = this._connection.models.usuarios || this._connection.model('usuarios', UsuarioSchema);
       
        const usuarioNovo = new UsuarioModel(usuario);
        usuarioNovo.save();
   }
module.exports = function(){
    return UsuariosDAO;
}