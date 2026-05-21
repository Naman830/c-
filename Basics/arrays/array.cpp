#include <bits/stdc++.h>
using namespace std;

// array stored in memory and in random place but we can access it by index and it is stored in contiguous memory location 
int main(){
    int arr[5] = {1,2,3,4,5};

    arr[2] = 10;
    cout << arr[2] << endl;

    // 2d array work as rows and columns aand it is stored in contiguous memory location
    int arr2[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    cout << arr2[5][5] << endl;
    return 0;
}