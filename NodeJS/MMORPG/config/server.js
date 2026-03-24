/* importar o módulo do framework express */
let express = require('express');

/* importar o módulo do consign */
let consign = require('consign');

/* importar o módulo do session */
let session = require('express-session');

/* iniciar o objeto do express */
let app = express();

/* setar as variáveis 'view engine' e 'views' do express */
app.set('view engine', 'ejs');
app.set('views', './app/views');

/* configurar o middleware express.static */
app.use(express.static('./app/public'));

/* configurar o session para login */
app.use(session({
    secret: process.env.SESSION_SECRET || 'chave_secreta',
    resave: false,
    saveUninitialized: false
}));
/* configurar parser para JSON */
app.use(express.json());

/* configurar o middleware body-parser */
app.use(express.urlencoded({extended: true}));

/* efetua o autoload das rotas, dos models e dos controllers para o objeto app */
consign()
	.include('app/routes')
	.then('config/dbConnection.js')
	.then('config/gameConfig.js')
	.then('app/models')
	.then('app/controllers')
	.into(app);

/* exportar o objeto app */
module.exports = app;