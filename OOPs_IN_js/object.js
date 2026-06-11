function Person(name, surname) {
  this.name = name;
  this.surname = surname;
  this.address = "";
  this.email = "";
  this.displayFullName = function () {
    return name + surname;
  };
}

let chico = new Person("naman", "singla");
let naman = new Person("Chico", "Lackwaski");
naman.address = "Model town toahna 70";
naman.email = "namansingla830@gmail.com";
naman.displayFullName = "yo yo" + "chico";

console.log(chico);
console.log(naman);
