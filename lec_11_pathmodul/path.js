/*
*****************************************************************************
The path module provides utilities foe working with file and directory paths.

  const path = requier ("path");


  */

const path = require("path");
// console.log(path.dirname("C:/Users/pc/Desktop/jay_tarsariyta/node_js/lec11_pathmodul/path.js"));   
//   
//     
//   
// 

// console.log(path.extname("C:/Users/pc/Desktop/jay_tarsariyta/node_js/lec11_pathmodul/path.js"));
//   
// 
//   
// 

console.log(path.basename("C:/Users/pc/Desktop/jay_tarsariyta/node_js/lec11_pathmodul/path.js"));

console.log(path.parse("C:/Users/pc/Desktop/jay_tarsariyta/node_js/lec11_pathmodul/path.js"));


const mypath = path.parse("C:/Users/pc/Desktop/jay_tarsariyta/node_js/lec11_pathmodul/path.js");
console.log(mypath.name);