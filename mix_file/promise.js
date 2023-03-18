// // const add = (a) => {
// //   return new promise(function (resole, reject) {
// //     return resole(a + b);
// //     return reject("error");
// //   });
// // };

// // add(10, 10);

// let myPromise = new Promise(function (myResolve, myReject) {
//   // "Producing Code" (May take some time)

//   myResolve(); // when successful
//   myReject(); // when error
// });

// // "Consuming Code" (Must wait for a fulfilled Promise)
// myPromise.then(
//   function (value) {
//     /* code if successful */
//   },
//   function (error) {
//     /* code if some error */
//   }
// );

// myPromise();

for (let num = 1; num < 10; num++) {
  let tableOf = 12;
  console.log(tableOf + "*" + num + "=" + tableOf * num);
 
}
