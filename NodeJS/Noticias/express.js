let app = require('./config/server');
let porta = 3000;
app.set('view engine', 'ejs');
app.listen(porta, function (){
    console.log("Server ON");   
}
);