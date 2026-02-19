let connection = require('../../config/dbConnection')();
module.exports = function(app){
    app.get("/", function (req,res){

        connection.query("select * from noticias", function(error, result){
            res.render('../views/secao/noticias.ejs', {noticias: result});
        });
    });
};