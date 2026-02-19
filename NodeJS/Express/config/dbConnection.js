let mysql = require('mysql2');
    
module.exports = function(){
       return mysql.createConnection({
            host: 'localhost',
            user: 'root',
            password: '1324',
            database: 'portal_noticias'
        }); 
};