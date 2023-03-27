const express = require("express");
const router = express.Router();

router.get("/", (req, resp, next) => {
  resp.status(200).json({
    name: "jay",
    email: "jaytarsariya1232@gmail.com",
    age: 20,
  });
});
router.post("/", (req, resp, next) => {
  resp.status(200).json({
    msg: "This is post request",
  });
});

module.exports = router;
