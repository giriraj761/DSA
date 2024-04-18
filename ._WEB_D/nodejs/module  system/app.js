//                     object in java script


// const obj1 = {                            first way to create
//     name:"giriraj",
//     gender : 'm'
// };


// function createobj(name , rollno)        2nd way to create factory function
// {
//     return{
//         name : name,
//         roll : rollno,
//         enroll(){
//             console.log("this is 2nd object");
//             let y = 10;
//             return y*20;
//         }
//     }
// }
// const obj2 = createobj("krishna" ,123456);


// function object()                    3rd way to create constructor function 
// {                                                            ##  BEST  ##
//     this.name= "sharma",
//     this.age= 21
// }
// const obj3 = new object();

// console.log(obj1,obj2,obj3);
// let xn = obj2.enroll();
// console.log(xn+200)



//                                     importing modules and using them 

// console.log(module);
// const logger = require('./logger');      import as a object 
// console.log(logger);
// logger.log("hello there how are you");
//     obj1.function();


// const x = require("./logger"); //import as a function
// x("hello there ");

                                    //custome event listner located in logger file
// const fun = require('./logger');
// console.log(fun);
// const emitter = fun.onevent();

// emitter.on('messagelogged',(args) => {
//     console.log("listner called",args.Name,args.id);
//     });

//     emitter.emit('messagelogged',{id: 1234, Name :'eventlistner1'});


// const Logger = require('./logger');
// const emitter = new Logger();

// emitter.on('messa1ge',(args,msg) => {
//     console.log('listner called',args,msg);
//     setTimeout(() => {
//         console.log("time out reached");
//     }, 3000);
// });

// emitter.log('event raised by app.js');

// const net = require('net');
// const blockList = new net.BlockList();
// blockList.addAddress('123.123.123.123');
// blockList.addRange('10.0.0.1', '10.0.0.10');
// blockList.addSubnet('8592:757c:efae:4e45::', 64, 'ipv6');

// console.log(blockList.check('123.123.123.123'));  // Prints: true
// console.log(blockList.check('10.0.0.3'));  // Prints: true
// console.log(blockList.check('222.111.111.222'));  // Prints: false

// // IPv6 notation for IPv4 addresses works:
// console.log(blockList.check('::ffff:7b7b:7b7b', 'ipv6')); // Prints: true
// console.log(blockList.check('::ffff:123.123.123.123', 'ipv6')); // Prints: true
// console.log(net.isIPv4('192.168.15.14.25'));

const arr=[2,4,5,6,7];
console.table(arr);
console.table(arr.filter(arr => arr>4));