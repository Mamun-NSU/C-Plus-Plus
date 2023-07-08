#include <iostream>
#include <string>

using namespace std;

int main()
{
    int A, B, C;
    char S, Q;

    cin >> A >> S >> B >> Q >> C;

    int result;
    if (S == '+')
    {
        result = A + B;

        if (C == result)
        {
            cout << "Yes";
        }
        else
        {
            cout << result;
        }
    }
    else if (S == '-')
    {
        result = A - B;

        if (C == result)
        {
            cout << "Yes";
        }
        else
        {
            cout << result;
        }
    }
    else if (S == '*')
    {
        result = A * B;

        if (C == result)
        {
            cout << "Yes";
        }
        else
        {
            cout << result;
        }
    }
    else
    {
    }

    return 0;
}