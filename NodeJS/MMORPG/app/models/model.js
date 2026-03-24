module.exports = (application)=>{
        let connection = application.config.dbConnection();
        const Schema = connection.Schema;
        const Usuario = new Schema({
            nome: {type: String, required: true},
            senha: {type: String, required: true},
            usuario: {type: String, required: true, unique: true},
            casa: {type: String, required: true},
            // Atributos do personagem
            ouro: { type: Number, default: 25 },
            aldeoes: { type: Number, default: 10 },
            temor: { type: Number, default: 0 },
            sabedoria: { type: Number, default: 0 },
            comercio: { type: Number, default: 0 },
            magia: { type: Number, default: 0 },
            pergaminhos: {type: Number, default: 0}
        });
        const UsuarioModel = connection.model('usuarios',Usuario);
        return UsuarioModel;
}