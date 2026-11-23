#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(50);

    cout << "Dynamic value: " << *ptr << '\n';

    delete ptr;

    return 0;
}