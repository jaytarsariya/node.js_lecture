// function change() {
//   document.getElementsByTagName("h1")[0].style.backgroundcolor = "green";
//   document.getElementsByTagName("h1")[0].style.color = "yellow";
// }

// function rechange() {
//   document.getElementsByTagName("h1")[0].style.backgroundcolor = "blue";
//   document.getElementsByTagName("h1")[0].style.color = "black";
// }

// function add() {
//   var a = document.getElementById("a")[0].value;
//   var b = document.getElementById("b")[0].value;
// }

// function validation() {
//   var fname = document.getElementById("fname").value;
//   var lname = document.getElementById("lname").value;
//   var fnamee = document.getElementById("fname");
//   var lnamee = document.getElementById("lname");
// }

// setTimeout(() => {
//   dt.innerHTML = new Date();
// }, 1000);
// setInterval(() => {
//   dt1.innerHTML = new Date();

// }, 1000);

// call back :=  (error)

// const square = (s,callback)=>
// {
//     callback (s*s)
// }

// const cube = (q, callback)=>
// {
//     callback (s*s*s)
// }

//   square (10,(squar)=>
//   {
//     console.log(square);
//     cube (square,(c)=>
//     {
//         console.log(c);
//     })
//   })

//loop........

// for (var i=1; i<=10;i++)
// {
//     console.log(i);
// }

// var i=10 ;

// while(i>10)
// {
//     console.log(i);
//     i--;
//}

//function......  (run successfully)

// function call() {
//   console.log("calling.....");
// }
// function add(a, b) {
//   console.log(a + b);
// }
// function square(a) {
//   return a * a;
// }

// call();
// add(10, 20);
// var sq = square(10);
// console.log(sq);

// Arrow function............. (run successfully)

// var call = () => {
//   console.log("calling");
// }

// var add=(a,b)=>
// {
//     console.log(a+b);
// }

// call();
// add(5,50);

// array........

// 1. pop
// 2. shift
// 3. unshift
// 4. push
// var a= [10,20,30,40,50,60,70]

// console.log(a.pop());
// console.log(a.shift());
//console.log(a.unshift(100));
//console.log(a.shift());

// find and filter.....  (run successfylly)

// var a=[10,20,30,40,50,60]

// var myvalue=a.find(ele=>
//     {
//         return ele==40;
//     })

//     var myvalue1=a.filter(ele=>
//         {
//             return ele==40;
//         })

//     console.log(myvalue);
//     console.log(myvalue1);



//string..... (run successfully)

// var str = "sun rises in the east";

// console.log(str.length);
// console.log(str.charAt(10));
// console.log(str.indexOf("t"));
// console.log(str.lastIndexOf("s"));
// console.log(str.endsWith("t"));
// console.log(str.split(" "));
// console.log(str.trim());




// callback function...


// const fun1 = () =>
// {
//     setTimeout(function()
//     {
//         console.log("welcom");
//     },3000);
    
// }

// const fun2 = () =>{
//     console.log("i am jay");
// }

// fun1();
// fun2();
 
 



var a= 20;
console.log(a);