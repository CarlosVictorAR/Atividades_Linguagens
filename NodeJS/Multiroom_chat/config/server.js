//modulo express
let express = require('express');

//modulo bodyParse
let bodyParse = require('body-parser');

//modulo expressValidator
let expressValidator = require('express-validator');

//modulo ejs
let ejs = require('ejs');

//modulo consign
const consign = require('consign');

//iniciei express
let app = express();

//setei a view engine e vies do express
app.set('view engine', 'ejs');
app.set('views', 'app/views');

//configurei bodyParse
app.use(bodyParse.urlencoded({extended: true}));

//iniciei o expressValidator
app.use(expressValidator());

//configurar o middleware express.static
app.use(express.static('./app/public'));

//passando parametros para o consign iniciar os modulos
consign()
.include('app/routes')
.then('app/controllers')
.then('./app/models')
.into(app);

//exportei o objeto app
module.exports = app;