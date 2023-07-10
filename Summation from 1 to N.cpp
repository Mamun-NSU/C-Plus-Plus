#include <iostream>

using namespace std;

int main()
{
    long long int N;
    cin >> N;
    long long int sum = N * (N + 1) / 2; // rule

    cout << sum << endl;

    return 0;
}