#include <iostream>
using namespace std;

int main() {
    int number = 25;
    int* ptr = &number;

    cout << "Value of number: " << number << '\n';
    cout << "Address of number: " << &number << '\n';
    cout << "Address stored in ptr: " << ptr << '\n';
    cout << "Value through ptr: " << *ptr << '\n';

    return 0;
}