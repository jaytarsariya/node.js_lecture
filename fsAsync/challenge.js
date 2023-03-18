const fs = require("fs");

fs.writeFile("bio.txt", "hello my name is jay,and i am 20 years old", (err) => {
  console.log("file created");
});

fs.appendFile("bio.txt", "welcome to my page", (err) => {
  console.log("task complited");
});

fs.readFile("bio.txt", "UTF-8", (err, data) => {
  console.log(data);
});

fs.renameSync("bio.txt", "mybio.txt");

fs.unlinkSync("mybio.txt");
