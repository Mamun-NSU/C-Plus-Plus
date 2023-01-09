#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = n % 10;
    int f = n;

    while (f >= 10)
    {
        f = f / 10;
    }

    if (f == a)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}