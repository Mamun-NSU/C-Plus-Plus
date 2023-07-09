#include <iostream>
#include <string>

using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y; // Inputs from users

    int summation = X + Y, multiplication = X * Y, subtraction = X - Y;

    cout << X << " + " << Y << " = " << summation << endl;
    cout << X << " * " << Y << " = " << multiplication << endl;
    cout << X << " - " << Y << " = " << subtraction << endl;

    return 0;
}