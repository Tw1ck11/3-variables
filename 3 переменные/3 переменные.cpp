// 3 переменные.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string a, b, c, d, e;

    // 3 variables
    cout << "Enter two variables: " << endl;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << "It was: a = " << a << ", b = " << b << endl;
    c = a;
    a = b;
    b = c;

    cout << "It became: a = " << a << ", b = " << b << endl;

    // 2 variabels
    cout << "Enter two variables: " << endl;

    cout << "d = ";
    cin >> d;
    cout << "e = ";
    cin >> e;

    cout << "It was: d = " << d << ", e = " << e << endl;
    swap(e, d);

    cout << "It became: d = " << d << ", e = " << e << endl;
}
