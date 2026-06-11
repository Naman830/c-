// While in other languages, such as Java or C#, a class is an abstract description of the structure of an object, in JavaScript the class construct is just a syntactic simplification of the approaches to create objects we have already seen

class Person {
  constructor(name, surname) {
    this.name = name;
    this.surname = surname;
  }
}

// We can realize that classes are just syntactic sugar for the constructor's definition, simply getting the type of a class by means of the typeof statement:
console.log(typeof Person);
var person = new Person("John", "Smith");

console.log(person);

// The constructor of a class is a method with the reserved name constructor. You cannot have more than one constructor() method in a class.
// classes are not hoisted
