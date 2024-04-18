let a = document.links;
console.log(a);

Array.from(a).forEach( x => {
    let str= x.toString();

    if(str.includes("codewithharry.com")==1)
    {
        console.log(str,"link printed");
    }
    
});