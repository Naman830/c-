#include <bits/stdc++.h>
using namespace std;
// Function are a set of code which perform something for you 
// Function are used to modularise code
// Function are used to increase useablity of code
// function are used to use same code multiple times

// void --> which does not return anything 
// return
// paramertized
// non parameterized
void printName(string name){
    cout << "Hello "  << name << endl;
}


int main(){
    string name;
    cin >> name;
    printName(name);
    return 0;
}