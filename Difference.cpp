#include <iostream>

using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D; // Inputs from User

    long long dif = (A * B) - (C * D);
    cout << "Difference = " << dif << endl;

    return 0;
}