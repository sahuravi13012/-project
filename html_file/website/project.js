//percentage programm---------------
// var per;
// per = 90;

// if (per >= 60 && per <= 100) console.log("first division");
// else if (per >= 50 && per < 59.99) console.log("second division");
// else if (per >= 33 && per < 49.99) console.log("third division");
// else console.log("fail");

// program for vote
// var age;
// age = 18;

// if (age < 18) console.log("you are not eligible for vote");

// if (age >= 18) console.log("you are eligible for vote");

// var first, second;
// first = 125;
// second = 254;

// if (first > second) console.log("first  is greater than second number");
// else if (first == second) console.log("first number is equal second number");
// else console.log("second  is greater than first number");

// var first, second, third;
// first = 125;
// second = 254;
// third = 350;

// if (first > second && first > third) console.log("first number is greater");
// else if (first < second && second > third)
//   console.log("second number is greater");
// else if (third > first && third > second)
//   console.log("third number is greater");
// else console.log("third number is greater");

function check() {
  var first, second, third;
  first = 125;
  second = 254;
  third = 350;

  if (first > second && first > third) console.log("first number is greater");
  else if (first < second && second > third)
    console.log("second number is greater");
  // else if (third > first && third > second)
  //   console.log("third number is greater");
  else console.log("third number is greater");
}
check();
