// (this) is a special hidden pointer available inside every non-static member function.
// It stores the address of the current object.

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

    // SO what is the problem that if we want same name of parameter in function as object so it's hard to rember it's address
    Teacher(string name, string department, string subject, double salary)
    {
        // this->name is a object value and = name is the parameter value
        this->name = name;
        this->department = department;
        this->subject = subject;
        this->salary = salary;
    }

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
};

int main()
{
    Teacher t1("Naman", "It", "C++", 250000);
    t1.getInfo();
    return 0;
}