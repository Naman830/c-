// This is a special method invoked automatically at time of object creation. Used for Initialization

#include "bits/stdc++.h"
using namespace std;

class Teacher
{
private:
    double salary;

public:
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
    t1.department = "IT";
    t1.subject = "DSA";
    t1.setSalary(50000);
    t1.changeDepartment("Computer Science");

    cout << "Salary: " << t1.getSalary() << endl;
    return 0;
}