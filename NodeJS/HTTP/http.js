let http = require('http');

let server = http.createServer(function(req, res){
    let categoria = req.url;
    if (categoria == "/tecnologia")
        res.end("<html><body><h1>Pagina de Tecnologia</h1></body></html>");

    else if (categoria == "/esportes")
        res.end("<html><body><h1>Pagina de Esportes</h1></body></html>");

    else 
        res.end("<html><body><h1>Portal de Noticias</h1><h2>Noticia 1</h2><h2>Noticia 2</h2></body></html>");
});

server.listen(3000);