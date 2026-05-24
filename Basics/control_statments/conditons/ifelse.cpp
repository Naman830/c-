#include <bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cin >> age;
    if (age >= 18){
        cout << "You are an adult." << endl;
    } else if (age >= 13){
        cout << "You are a teenager." << endl;
    } else {
        cout << "You are a child." << endl;
    }
    return 0;
}