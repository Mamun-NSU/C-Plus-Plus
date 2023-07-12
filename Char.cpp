#include <iostream>

using namespace std;

int main()
{
    char C;
    cin >> C;

    if (C >= 65 && C <= 90)
    {
        C = C + 32;
    }
    else if (C >= 97 && C <= 122)
    {
        C = C - 32;
    }
    else
    {
    }

    cout << C << endl;
    return 0;
}