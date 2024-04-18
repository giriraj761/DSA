// importing the os module from node 14.8.1 version and than using them to see what features are available


//https://nodejs.org/dist/latest-v14.x/docs/api/ 


//                                   //operating system module
// const os = require('os');   
// console.log(os.uptime());

//                                  //file module syncronous method
// const fs = require('fs'); 
// let y = fs.readdirSync(__dirname);
// console.log(y);

                                     // file module asyncronous method
// const fs = require('fs');
// fs.readdir(__dirname,(err ,files) =>
// {
//     if(err) console.log(err);
//     else console.log("result ",files)
// });


                                    //net module
// const net = require('net');
// const blocklist = new  net.BlockList();
 
// blocklist.addAddress('192.168.75.5');

// console.log(blocklist.check('192.168.75.5'));

const fs = require('fs');

//write and read async function in fs mode of node js
fs.writeFile('file1.txt',"write in a file",(err)=>{
    if(err)console.log("there was a error",err);
    else console.log("sucessfully written in the file");
});

const a = fs.readFile('Y:\\Codes\\webd\\nodejs\\codewithharry\\dns node.js','utf8',(err,file)=>{
    if(err)console.log('an error is there',err);
    else console.log(file,'done');
});