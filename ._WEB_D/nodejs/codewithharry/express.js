import express from 'express';
import fs from 'fs';
const app = express()
const port = 8000

app.get('/', (req, res) => {
  res.send(`Hello World! you are currently at the port number ${port}`);
});

app.get('/fs', (req, res) => {
  const data = fs.readFileSync('Y:\\Codes\\webd\\flexbox\\flexboxindex.html');
  res.send(data.toString());
});

app.get('/about', (req, res) => {
  const data = fs.readFileSync('Y:\\Codes\\webd\\flexbox\\about.html');
  res.send(data.toString());
});

app.listen(port, () => {
  console.log(`Example app listening at http://localhost:${port}`);
});

