// This is a special method invoked automatically at time of object creation. Used for Initialization

// Same name as Class name
// No return type, not even void function
// Can have default arguments
// Only called once(automatically) at time of object creation
// Memory allocation happens when construtor is called

#include "bits/stdc++.h"
using namespace std;

class Teacher
{
private:
    double salary;

public:
// Constructor
// Intialization means assign the value in advance like: department is set to Computer science by default when the object is created
    Teacher() {
        department = "Computer Science";
    };
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
};

int main()
{
    Teacher t1; // Default constructor is called here, which is provided by the compiler if we don't define any constructor. It initalizes the data members with garbage values.
    t1.name = "Naman Singla";
    t1.subject = "DSA";
    t1.setSalary(50000);
    t1.changeDepartment("Computer Science");

    cout << "Department: " << t1.department << endl;
    return 0;
}