const http = require("http");
const fs = require  ("fs");

const hostname="127.0.0.1";
const port = 3000;

const server = http.createServer((req, res) => {
    console.log("hello");
    console.log(req.url);
    url = req.url;
});

    server.listen(port, hostname, () => {
        console.log(`Server connected`);
});
