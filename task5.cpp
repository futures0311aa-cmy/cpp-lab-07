#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size] = {2, 4, 6, 8, 10};
    int* ptr = arr;

    cout << "Array elements using pointer arithmetic: ";

    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << ' ';
    }

    cout << '\n';
    return 0;
}