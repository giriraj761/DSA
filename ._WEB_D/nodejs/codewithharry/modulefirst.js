import {logger} from  "./modulesecond.mjs"

const emiter = new logger();

emiter.on('loggedin',(args,msg)=>{
    console.log(msg,"\n logged in by ",args);
    setTimeout(() => {
        console.log('timeout is also responding');
    }, 3000);
    console.log("before timeout");
});

emiter.loggedin("welcome :");
// obj['fun']();
// console.log(obj['fun']);