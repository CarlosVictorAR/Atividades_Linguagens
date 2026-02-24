function NoticiasDAO (connection){
        this._connection = connection;
}
NoticiasDAO.prototype.getNoticias = function(callback){
    this._connection.query('select * from noticia order by id', callback);
}
NoticiasDAO.prototype.cadastrarNoticia = function(noticia, callback){
    this._connection.query(`insert into noticia set ?`,noticia, callback);
}
NoticiasDAO.prototype.deleteNoticia = function(id, callback){
    this._connection.query(`delete from noticia where id = '${id}'`, callback);
}
module.exports = function (){
    
    return NoticiasDAO;
}