/* importar o mongodb */
const mongoose = require("mongoose");
let connection = function(){
    mongoose.connect(process.env.MONGO_URI);
    return mongoose;
}
module.exports = function(){
    return connection;
};