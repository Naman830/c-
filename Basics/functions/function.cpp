#include <bits/stdc++.h>
using namespace std;
// A function is a block of code that performs a specific task.
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

int sum(int num1, int num2){
    int result = num1 + num2;
    return result;
}

int main(){

    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1, num2);
    cout << res << endl;

    // string name;
    // cin >> name;
    // printName(name);
    return 0;
}