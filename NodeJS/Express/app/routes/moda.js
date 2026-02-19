let connection = require('../../config/dbConnection')();
module.exports = function(app){
   app.get("/moda", function (req,res){
        connection.query("select * from moda", function(error, result){
            res.render("./secao/moda.ejs", {moda: result});
        });
    });
};