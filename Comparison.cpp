#include <iostream>

using namespace std;

int main()
{
    int A, B;
    char S;

    cin >> A >> S >> B;

    if (S == '<')
    {

        if (A < B)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else if (S == '>')
    {

        if (A > B)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else if (S == '=')
    {

        if (A == B)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else
    {
    }

    return 0;
}