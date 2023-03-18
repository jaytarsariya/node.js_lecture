// 23/2/23    ******************************Asynchronous*********************

const fs = require("fs");

// fs.writeFile("read.txt", "hello today is awesome day", (err) => {
//   console.log("file created");//async with callback function
//   console.log(err);
// });

// fs.appendFile("read.txt", "welcome to my page", (err) => {
//   console.log("task complited");
// });

fs.readFile("read.txt","UTF-8", (err, data) => {
  console.log(data);
});
