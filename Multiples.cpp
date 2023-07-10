#include <iostream>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    if (B > A)
    {
        int temp;
        temp = A;
        A = B;
        B = temp;
    }

    if (A % B == 0)
    {
        cout << "Multiples" << endl;
    }
    else
    {
        cout << "No Multiples" << endl;
    }

    return 0;
}