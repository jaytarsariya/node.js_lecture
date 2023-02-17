// **********REPL*************

// R= read
// E = eval
// P = print
// L = loop

//    read eval print loop.





//     ************* core module ************

const fs = require("fs");

// creating a new file.
fs.writeFileSync("file.txt", "hello i am jay tarsariya");

const buf_data = fs.readFileSync("file.txt");
console.log(buf_data);


org_data = buf_data.toString();

console.log(org_data);
// run ans.  ( hello i am tarsariya )


fs. renameSync("file.txt","readwrite.txt");



