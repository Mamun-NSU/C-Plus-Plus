#include <iostream>

using namespace std;

int main()
{
    int A;
    cin >> A;

    int result;

    while (A > 0)
    {
        result = A % 10;
        A = A / 10;
    }

    if (result % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }

    return 0;
}The last 2 digits