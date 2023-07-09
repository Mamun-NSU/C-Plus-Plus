#include <iostream>

using namespace std;

int main()
{
    long long N, M;
    cin >> N >> M; // Inputs from users

    int A = N % 10;
    int B = M % 10;
    int sum = A + B;

    cout << sum << endl;

    return 0;
}