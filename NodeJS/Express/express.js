let app = require('./config/server');
let porta = 3000;
app.set('view engine', 'ejs');
let rotaNoticias = require('./app/routes/noticias')(app);
let rotaTecnologia = require('./app/routes/tecnologia')(app);
let rotaModa = require('./app/routes/moda')(app);
app.listen(porta, function (){
    console.log("Server ON");   
}
);