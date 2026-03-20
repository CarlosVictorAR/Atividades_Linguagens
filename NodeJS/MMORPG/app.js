/* importar as configurações do servidor */
require('dotenv').config();
var app = require('./config/server');

/* parametrizar a porta de escuta */
app.listen(process.env.PORT, function(){
	console.log('Servidor online');
});