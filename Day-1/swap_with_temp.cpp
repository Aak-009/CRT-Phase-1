#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // Taking input from user
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Swapping using temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display updated values
    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
