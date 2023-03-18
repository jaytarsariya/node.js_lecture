const fs = require("fs");

// const data = fs.readFileSync("read.txt", "utf-8");
// console.log(data);    //SYNC


fs.readFile("read.txt", "UTF-8", (err, data) => {
  console.log(data);    // ASYNC
  
});
console.log("after the data");
