function UsuariosDAO(connection){
    this._connection = connection();

}
   UsuariosDAO.prototype.inserirUsuario = async function(usuario){
       const Schema = this._connection.Schema;
       const UsuarioSchema = new Schema({
           nome: { type: String, required: true },
           senha: { type: String, required: true },
           usuario: { type: String, required: true },
           casa: { type: String, required: true }
       });

       let UsuarioModel = this._connection.model('usuarios', UsuarioSchema);
       let array = await UsuarioModel.find({nome: {$eq: "caca"}});
       console.log(array[0].usuario);
   }
module.exports = function(){
    return UsuariosDAO;
}