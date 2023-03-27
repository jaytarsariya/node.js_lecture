const express = require("express");
const app = express();
const student_routes = require("./api/routs/student")
const port = 9000;

app.use('/student',student_routes)

app.get("/",(req,resp)=>{
    resp.send("Hello frome the home page side ")
})


app.listen(port,()=>{
    console.log(`express server created`);
})

module.exports = app;