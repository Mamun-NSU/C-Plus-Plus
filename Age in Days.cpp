#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long A;
    cin >> A;

    int X, Y, Z;

    X = A / 365;
    Y = (A % 365) / 30;
    Z = ((A % 365) % 30);

    cout << X << " Years" << endl;
    cout << Y << " months" << endl;
    cout << Z << " days" << endl;

    return 0;
}