#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long X, Y;
    cin >> X >> Y; // Inputs from users

    long long summation = X + Y, subtraction = X - Y;
    long long multiplication = X * Y;

    cout << X << " + " << Y << " = " << summation << endl;
    cout << X << " * " << Y << " = " << multiplication << endl;
    cout << X << " - " << Y << " = " << subtraction << endl;

    return 0;
}