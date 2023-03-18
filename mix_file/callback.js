const student = (a, b) => {
  var std = [10, 20, 30, 40, 50];
  b(std[a]);
};
const stDetail = (a, b) => {
  b("name of roll nomber " + a + " is jay ");
};

student(1, (b) => {
  stDetail(b, (k) => {
    console.log(k);
  });
});
