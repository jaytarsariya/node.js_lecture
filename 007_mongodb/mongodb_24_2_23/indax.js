const mongodb = require("mongodb");
const mongoClient = mongodb.MongoClient;

const db_url = "mongodb://127.0.0.1:27017/mydb";


mongoClient.connect(db_url).then((result) => {
    console.log("DB connected....");

    mydb.collection("school").insertone({
      name:"rutvik",
      email:"rutvik362514@gmail.com"
    }).then(result =>{
      console.log("data inserted");
    }).catch(err=>{
      console.log(err);
    })
    // const mydb = result.db(database);

    // mydb.createCollection("school").then(result => {
    //   console.log("collection created...");
    // }).catch(err => {
    //   console.log(err);
    // })


    // mydb.collection("school").insertMany([{name:"jay",rollNO:25,sub:"commerce"},{name:"sanket",rollNO:"52",sub:"science"}]).then(result => {
    //   console.log("data inserted");
    // }).catch(err => {
    //   console.log(err);
    // })


//     mydb.collection("school").updateMany([{ name: "jay" }, { $set: { dep: "oracl", sal: 20000 } }])
// .then.apply((result) => {
//           console.log("data updated");
//         }).catch((err) => {
//             console.log(err);
//           });


  }).catch((err) => {
    console.log(err);
  });
