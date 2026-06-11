// a prototype in JavaScript is essentially an object that acts as a template or a reference for another object

// Let's say you have a Person constructor and you create two distinct objects from it
var johnSmith = new Person("John", "Smith");
var marioRossi = new Person("Mario", "Rossi");

Person.prototype.greets = function () {
  console.log("Hello " + this.name + " " + this.surname + "!");
};

// By assigning the method to the prototype, every single object created with the Person() constructor will instantly have access to the greets() method

"abc".padLeft(10, "x");

// With this single definition on the prototype, you can use padLeft() on any regular string as if it were a native, built-in method
//For example, executing will immediately return the string "xxxxxxxabc"
