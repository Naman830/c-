// This is a special method invoked automatically at time of object creation. Used for Initialization

// Same name as Class name
// No return type, not even void function
// Can have default arguments
// Only called once(automatically) at time of object creation
// Memory allocation happens when construtor is called

// Types of Constructor:
// 1. Default or Non-parameterized Constructor: No parameters, which is provided by the compiler if we don't define any constructor. It initalizes the data members with garbage values.

// 2. Parameterized Constructor: It takes parameters to initialize the data members with specific values at the time of object creation.

// 3. Copy Constructor: It creates a new object as a copy of an existing object. It takes a reference to an object of the same class as a parameter and initializes the new object with the values of the existing object.

#include "bits/stdc++.h"
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // Constructor

    // Intialization means assign the value in advance like: department is set to Computer science by default when the object is created
    // non-parameterized constructor
    // Teacher()
    // {
    //     department = "Computer Science";
    // };

    // Parameterized constructor
    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        department = d;
        subject = s;
        salary = sal;
    }
    string name;
    string department;
    string subject;

    void changeDepartment(string newDept)
    {
        department = newDept;
    }

    void setSalary(double s)
    {
        salary = s;
    }

    double getSalary()
    {
        return salary;
    }

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "subject : " << subject << endl;
    }

    // copy constructor custom
    Teacher(Teacher &orgObj)
    { // pass by refrence
        cout << "I am custom copy constructor...\n" <<endl;
        this->name = orgObj.name;
        this->department = orgObj.department;
        this->salary = orgObj.salary;
        this->subject = orgObj.subject;
    }
};

int main()
{
    // Non-parameterized constructor
    // Teacher t1; // Default constructor is called here
    // t1.name = "Naman Singla";
    // t1.subject = "DSA";
    // t1.setSalary(50000);
    // t1.changeDepartment("Computer Science");

    // Parametrized constructor
    Teacher t1("Naman", "It", "C++", 250000);
    // t1.getInfo();

    // Copy constructor
    Teacher t2(t1); // default copy constructor & custom copy consturtor
    t2.getInfo();
    return 0;
}