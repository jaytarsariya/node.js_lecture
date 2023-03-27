const http = require("http")
const index_js = require('./app')
const server = http.createServer(index_js);
const port = 5000


server.listen(port,console.log("server created"))


