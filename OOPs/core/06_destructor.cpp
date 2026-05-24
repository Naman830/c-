/*
    objects use memory/resources
    after object work is finished
    memory should be cleaned

    That cleaner is called: Destructor
    A destructor is a special function that automatically destroys and cleans an object when its life ends.

    It frees:
    memory
    files
    connections
    resources
*/

/*
    Destructor Rules
    ~ is called tilde.
    There should be No return type & No parameters
    Only one destructor allowed
    You NEVER call destructor manually normally. Compiler automatically calls it.
*/

#include "bits/stdc++.h"
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Constructor called\n";
    }

    ~Student()
    {
        cout << "Destructor called\n";
    }
};
int main()
{
    {
        Student s1;
    }
// Look outside block when inner destructor ends it automatically print then outside block
    cout << "Outside block";
    return 0;
}
