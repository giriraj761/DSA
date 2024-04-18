const dns = require('dns');

dns.lookup('nodejs.org', (err, address, family) => {
  console.log('address: %j \nfamily: IPv%s', address, family);
});

dns.resolveMx('google.com',(err,ret)=>{
    console.log(ret);
});