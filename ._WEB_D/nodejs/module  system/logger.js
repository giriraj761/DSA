
// function log(message)
// {
//     //send http request
//     console.log(message+'\nbye');
// }

// module.exports = log;                //as a function 
// // module.exports.log = log;         //as a object 


                                        //exporting the onevent function
// function onevent(){
//     const eventemitter = require('events');
//     // const emitter = new eventemitter();
//     return new eventemitter();
// }

// module.exports = onevent;
 

const EventEmitter = require('events');

class Logger extends EventEmitter{
    log(message){
        this.emit('messa1ge',{name: "event1", id:10098},message);
    }
}
module.exports = Logger;

