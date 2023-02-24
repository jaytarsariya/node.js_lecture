// what are the scopes of a variable in javascript ?

/*
************************************************

             [ JAVASCRIPT has two scope ]

*********************************
    1.  global variable and     |
    2.  local variable          |
 ********************************
           
    => global variable .

 A variable that is declared outside a function definition is a global variable. 

 and its value is accessible and modifiable throughout your program.
          
    => local variable .

  A variable that is declared inside a function definition is local.

  it is created and destroyed every time the function is executed, and it cannot be accessed by any code outside the function.
  
  inside a function, if a variable has not been declaqred with var it is created a global variable.
     
        




*/
        
// var a = 77;// global variable
// var b = 3;

// function add() {
//   console.log(a + b);
// }
// add();

// var i = "i am a global variable";
// function show() {
//   console.log(i);
// }
// show();

function add(b) {
  var a = 10; // a is local variable
  console.log(a + b);
}
add(20);
