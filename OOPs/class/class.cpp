#include "bits/stdc++.h"
using namespace std;

// We cannot access the properties and methods of the class directly, we need access modifiers to access them, By default, all the properties and methods of a class are private

// ACCESS MODIFIERS
// private -----> Data and Methods accessible only within the class
// public -----> data and methods accessible to everyone
// protected -----> data and methods accessible inside the class and it's derived classes


class Teacher {
    public:
    // properties
    string name;
    string department;
    string subject;
    double salary;
    
    // methods ( functions) // member functions
    void changeDepartment(string newDept){
        department = newDept;
    }
};

int main(){
    // We can create as many objects as we want of the class Teacher
    Teacher t1;
    // We can access the properties and methods of the class using the object t1
    t1.name = "Naman Singla";
    t1.department = "IT";
    t1.subject = "DSA";
    t1.salary = 50000;
    t1.changeDepartment("Computer Science");

    cout << "Department: " << t1.department << endl;
    return 0;
}