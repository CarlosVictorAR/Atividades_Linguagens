module.exports = (application)=>{
        let connection = application.config.dbConnection();
        const Schema = connection.Schema;
        const Usuario = new Schema({
            nome: {type: String, required: true},
            senha: {type: String, required: true},
            usuario: {type: String, required: true, unique: true},
            casa: {type: String, required: true}
        });
        const UsuarioModel = connection.model('usuarios',Usuario);
        return UsuarioModel;
}