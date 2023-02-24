// what is callback ?
/*
******************************************************************
 A callback is a function which is called when a task is complated thus helps in preventing any kind of blocking and a callback function allows other code to run in the many time.

 callback is called when task get completed and is asynchronous equivalent for a function.

 using callback concept.
******************************************************************


*/

       //callback function.
       
function sayhello() {
  console.log("hello");
}
function add(num1, num2,callback) {
  console.log(num1 + num2);
  callback();
}

add(10, 20, sayhello);
