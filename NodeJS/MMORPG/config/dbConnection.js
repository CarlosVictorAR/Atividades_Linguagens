/* importar o mongodb */
const mongoose = require("mongoose");
const mongoURI = 'mongodb://127.0.0.1:27017/got';
let connection = function(){
    mongoose.connect(mongoURI);
    return mongoose;
}
module.exports = function(){
    return connection;
};