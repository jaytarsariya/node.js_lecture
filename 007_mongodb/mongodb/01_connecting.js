const mongodb = require("mongodb");
const mongoClient = mongodb.MongoClient;

const db_url = "mongodb://127.0.0.1:27017";
// const database = "mydb";

mongoClient.connect(db_url).then((result) => {
    // console.log("data connected");
    // const myDb = result.db(database);

    // myDb.createCollection("emp").then((result) => {
    //    console.log("collection created");
    //   }).catch((err) => {
    //     console.log(err);
    //   });
    //
    //
    //

    //data insert
    // ******************
    // myDb.collection("emp").insertOne({ name: "jay", email: "jaytarsariya@gmail.com", sal: 100000 }).then((result) => {
    //   console.log(result);
    // })
    // .catch((err) => {
    //   console.log(err);
    // });


   
  })
  .catch((err) => {
    
    console.log(err);
  });
