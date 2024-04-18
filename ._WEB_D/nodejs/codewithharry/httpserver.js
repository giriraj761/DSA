import  fs from 'fs';
import http from 'http';
const port = process.env.PORT || 3000;

const server = http.createServer((req,res)=>{
    
    res.setHeader('Content-type','text/html') //server content type set

    if(req.url=='/about'){
        res.statusCode=200;  //status code for "ok"
        res.end('<h1>server created this </h1> <h2>hii welcome</h2><p>well how are u doing </p>');
    }
    else if(req.url=='/'){
        res.statusCode=200;  //status code for "ok"
        const data = fs.readFileSync('Y:\\Codes\\webd\\flexbox\\flexboxindex.html') ;
        res.end(data.toString());
    }
    else{
        res.statusCode = 404;
        res.end('<h1>not found </h1> <h2>this page was not found on this server try again </h2>');
    }

});

server.listen(port,(err)=>{
    if(err)console.log("an error occured");
    else console.log(`server is listning on port ${port}`);
});