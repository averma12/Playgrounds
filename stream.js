const fs = require('fs');
const server = require('http').createServer();


/*Stream creation*/

server.on('request', (req, res) => {
    const src = fs.createReadStream('./big.file');
    src.pipe(res);
  });
  
  server.listen(8000);
