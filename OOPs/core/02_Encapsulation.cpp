#include "bits/stdc++.h"
using namespace std;

// Encapsulaton is wrapping up of data and function into a single unit called class. it is the process of hiding the implementation details and showing only the functionality to the user. It is also know as data hiding (use private). It is achieved by using access modifiers.

// This class contain properties + methods of the teacher and have access modifier this is encapsulation.

class Teacher
{
private:
    double salary;

public:
    // properties
    string name;
    string department;
    string subject;

    // methods ( functions) // member functions
    void changeDepartment(string newDept)
    {
        department = newDept;
    }

    // We can create a function for print the private data member salary
    // setter to set the private value
    void setSalary(double s)
    {
        salary = s;
    }
    // getter to get the private value
    double getSalary()
    {
        return salary;
    }
};

class Student
{
public:
    string name;
    int rollNo;
    string course;
};

class Account
{
private:
    double balance;
    string password; //---> data hiding
public:
    string accoundId;
    string username;
};

int main()
{
    Teacher t1;
    t1.name = "Naman Singla";
    t1.department = "IT";
    t1.subject = "DSA";
    t1.setSalary(50000);
    t1.changeDepartment("Computer Science");

    cout << "Salary: " << t1.getSalary() << endl;
    return 0;
}