
#include <iostream>

using namespace std;

int main()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    if (X <= Y && Y <= Z)
    {
        cout << X << endl
             << Y << endl
             << Z << endl;
    }
    else if (X <= Z && Z <= Y)
    {
        cout << X << endl
             << Z << endl
             << Y << endl;
    }
    else if (Y <= Z && Z <= X)
    {
        cout << Y << endl
             << Z << endl
             << X << endl;
    }
    else if (Y <= X && X <= X)
    {
        cout << Y << endl
             << X << endl
             << Z << endl;
    }
    else if (Z <= X && X <= Y)
    {
        cout << Z << endl
             << X << endl
             << Y << endl;
    }
    else if (Z <= Y && Y <= X)
    {
        cout << Z << endl
             << Y << endl
             << X << endl;
    }

    cout << endl;
    cout << X << endl
         << Y << endl
         << Z << endl;

    return 0;
}