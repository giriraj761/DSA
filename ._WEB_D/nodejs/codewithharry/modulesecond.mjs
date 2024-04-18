import eventemmiter from 'events';
export class logger extends eventemmiter
{
    loggedin(msg){
        this.emit('loggedin',{user:"giriraj",id: 237654},msg);
        console.log("hello there you are in 2nd module")
    }
};

export function fun()
{
    console.log(`this the 2nd function `);
}