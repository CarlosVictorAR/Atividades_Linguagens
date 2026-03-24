let bcrypt = require('bcryptjs');
class UsuariosDAO {
    constructor (connection, application){
        this._connection = connection();
        this._application = application;
        this._model = this._application.app.models.model;
    }
    /**
     * 
     * @param {*} usuario 
     * @returns 
     */
    inserirUsuario = async (usuario)=>{
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
    buscarPorUsuario = async (usuario)=>{
        return this._model.findOne({usuario: {$eq: `${usuario}`}});
    }

    buscarPorId = async (id)=>{
        return this._model.findById(id);
    }

    atualizarAtributos = async (id, atributos)=>{
        return this._model.findByIdAndUpdate(
            id,
            {$set: atributos},
            { new: true}
        )
    }
}
module.exports = ()=>{
    return UsuariosDAO;
}