
const http = require("http");
// const fs = require("fs");


const server = http.createServer((req, resp) => {
  resp.end("hello ")

   app.get("/", (req,resp)=>{
      resp.send("Hello frome the home side");
   })
  









  // console.log(req.url);
  // if (req.url == "/") {
  //   resp.end("hello from home side.");
  // } else if (req.url == "/about") {
  //   resp.end("hello frome the Aboutus side .");
  // }else if (req.url == "/contact") {
  //   resp.end("hello frome the contactus side .");
  // }else if (req.url == "/userapi") {
  //   fs.readFile(`${__dirname}/lec_19_API/userapi.json`, "utf-8",(err,data)=>{
  //  console.log(data);
  //  resp.end(data);                  
  //   })
  // }else{
  //   resp.end("eror404, page not found.")
  // }
    
  
});

server.listen(9000, "127.0.0.1", () => {
  console.log(" server connect on port 9000");
});
