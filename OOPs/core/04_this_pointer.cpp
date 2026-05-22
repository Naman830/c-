#include "bits/stdc++.h"
using namespace std;

// Problem Understanding of "this" pointer

class Student
{
public:
    string name;

    // Constructor-like function
    void setName(string name)
    {
        /*
        Problem:

        Here both variables are named "name".

        1. First "name"  -> object's data member
        2. Second "name" -> local parameter variable

        Because local variables get higher priority,
        compiler thinks BOTH are the parameter variable.

        So this:

            name = name;

        actually becomes:

            parameter = parameter;

        Object's original variable never changes.

        ------------------------------------------------

        Solution:

        "this" pointer points to the CURRENT object
        which called the function.

        Example:

            s1.setName("Naman");

        Internally compiler sends:

            this = &s1

        So:

            this->name

        means:

            current object's name variable

        Arrow operator (->) is used because
        "this" is a POINTER.
        */

        this->name = name;

        /*
        Meaning:

        object's name = parameter name

        OR

        s1.name = "Naman"
        */
    }

    void display()
    {
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1;

    // Function call
    s1.setName("Naman");

    // Output
    s1.display();

    return 0;
}