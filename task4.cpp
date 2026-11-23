#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int* arr = new int[size]{10, 20, 30, 40, 50};

    cout << "Array elements: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }

    cout << '\n';
    delete[] arr;

    return 0;
}