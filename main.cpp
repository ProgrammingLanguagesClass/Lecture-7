#include <iostream>

using namespace std;

int main() {
    int x = 5;

    int *p = &x;
    int &rx = x;
    cout << "Value of x = " << x << endl;   // 5
    cout << "Value of rx = " << rx << endl;  // 5
    cout << "Value of *p = " << *p << endl;  // 5
    cout << "Value of p = " << p << endl;   // Address of x
    cout << "Address of x = " << &x << endl;  // Address of x
    cout << "Address of rx = " << &rx << endl;  // Address of x
    cout << "Address of p = " << &p << endl;  // Address of p

    *p = 6;  // x = 6
    cout << "Value of x = " << x << endl;  // 6

    rx = 10;
    cout << "Value of x = " << x << endl;
    cout << "Value of rx = " << rx << endl;

    int a[5] = {0, 1, 2, 3, 4};
    p = a;

    cout << "Value of a[3] = " << a[3] << endl;       // a[3]
    cout << "Value of p[3] = " << p[3] << endl;      // a[3]
    cout << "Value of *(p+3) = " << *(p + 3) << endl;  // a[3]
    cout << "Value of *(a+3) = " << *(a + 3) << endl;  // a[3]
    cout << "Value of *p = " << *p << endl;        // a[0]
    p++;
    cout << "Value of *p = " << *p << endl;        // a[1]
}