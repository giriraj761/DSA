// let x = document.querySelector('button');
// x.addEventListener('click', showmsg);

// function showmsg()
// {
//     let name = prompt('enter a new name ');
//     x.textContent = 'no 1: '+name;
// }

let x = document.getElementById("btn1");
console.log(x);
x.addEventListener('click',display);

function display()
{
    document.write("hello there you clicked a button");
    alert("you are leaving the site you will be redirected to different website");
    // x.textContent="hello there";
}
