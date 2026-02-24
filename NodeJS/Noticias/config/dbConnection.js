let mysql = require('mysql2');
const myConnectionSQL = function (){
       return mysql.createConnection({
            host: 'localhost',
            user: 'root',
            password: '1324',
            database: 'teste'
        }); 
}
    
module.exports = function(){
   return myConnectionSQL;
};