
const fs = require('fs');
const { Client, Intents } = require('discord.js');
const client = new Client({ intents: [Intents.FLAGS.GUILDS] });
let list = require('./requestlist.json');
// console.log(list[1].name);

const token = "OTQxNjM5NTkwNzc3ODgwNTk3.YgY4NQ.g2fV475fmMVG79MAEwNmxjua40A";

client.on('ready', () => {
	console.log('Ready!');
});

client.login(token);

client.on('message',async message=> {
    
    if(message.author.bot || !message.content.startsWith("!cs")){return}
    // console.log(message.content.slice(4).split(/ +/));
    // message.channel.send("hii there");

    // console.log(message);

    let x = message.content.slice(4).split(/ +/);
    console.log(x);

    if(x.length>1 && x[0]=='request')
    {
        let rec = '';
        for(let a = 1 ; a<x.length;a++)
        {
            rec+=x[a]+" ";
        }
        const appreq = {
            'name' : message.author.username,
            'id':message.author.id,
            'request':rec,
            'requestid':list.length>0?list[list.length-1].requestid+1:0,
            'request_status':false
        } 

        list.push(appreq);

        try{
            fs.writeFileSync('./requestlist.json',JSON.stringify(list));
            message.reply("accepted will be processed soon");
        }catch(err){
            message.error(":( request not accepted "+err);
        }   
  
    }
        if(x.length===2 && x[0]=='list' && x[1]=='request')
        {
            try {
                var data = fs.readFileSync('E:\\Codes\\BOT\\requestlist.json' , 'utf8');
                // console.log(data)
              } catch (err) {
                console.error(err)
              }
              let ress = JSON.parse(data);
              let response='';
              ress.forEach(ele => {
                  if(ele.id===message.author.id){
                  response+='\nName\t:\t'+ele.name+"\nRequest:\t"+ele.request+"\n"+'status\t:\t'+(ele.request_status?'done':'pending')+'\n-----------------------------------------------------------\n';
              }
            });
            if(response!=='')
              message.reply(response);
              else
              message.reply('You dont have any requests.');
            // console.log(name,request,requestid,data);
            // console.log(data.toString());
        }
    
        if(x.length===2 && x[0]=='list' && x[1]=='request')
        {
            const today = new Date();
            // message.channel.send(today.getHours()+" "+today.getMinutes()+ " "+today.getSeconds());   
        }

});

//request processing
function requestprocessing(){

}