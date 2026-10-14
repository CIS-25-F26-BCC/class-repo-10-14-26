#include <iostream>

using namespace std;

// 7! = 7 * 6 * 5 * 4 * 3 * 2 * 1

int factorial(int number) {
    if(number <= 1) {
        return 1;
    }
    // base

    cout << "Currently calculating the factorial of: " << number << endl;

    // recursive
    return factorial(number-1) * number;
}

int addElements(int * arr, int count) {
    // base
    if(count <= 0) {
        return 0;
    }

    cout << "The memory address of this addElements function call arr is: " << arr << endl;

    return addElements(arr + 1, count - 1) + arr[0];
    // recursive case
}
 
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};


    cout << "The sum of each element in the array is: " << addElements(arr, 10) << endl;
    return 0;
}