const eventemmiter = require('events');

const emmiter = new eventemmiter();

emmiter.on("first",() =>{
    console.log("you have accessed first");
});
emmiter.on("second",()=>{
    console.log("you have accessed second");
});

let x=2; 

if(x===1){
    emmiter.emit('first');
}
else{
    emmiter.emit('second');
}