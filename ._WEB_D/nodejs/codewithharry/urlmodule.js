import url from 'url';

// console.log(url);

const myurl = new URL('https://www.google.com:8900/');
myurl.password = '123';
myurl.username= 'giriraj';
myurl.pathname='watch/goal';
myurl.search= 'd=e';
myurl.hash='fgh';

console.log(myurl);
console.log(myurl.href);
console.log(myurl.hostname);