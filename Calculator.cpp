#include <iostream>
#include <string>

using namespace std;

int main()
{
    int A, B;
    char S;

    cin >> A >> S >> B;

    int result;
    if (S == '+')
    {
        result = A + B;
    }
    else if (S == '-')
    {
        result = A - B;
    }
    else if (S == '*')
    {
        result = A * B;
    }
    else if (S == '/')
    {
        result = A / B;
    }
    else
    {
    }

    cout << result;
    return 0;
}