// const path = require("path");

// console.log(path.dirname("C:\Users\pc\Desktop\jay_tarsariyta\node_js\practice\path_practice.js"));

const os = require("os");

// console.log(os.cpus());
console.log(os.machine());
console.log(os.freemem() / 1024 / 1024 / 1024);
console.log(os.version());
