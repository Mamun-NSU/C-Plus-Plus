#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N;
    cin >> N;
    int A[N];

    long long B[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];

        if (i == 0)
        {
            B[i] = A[i];
        }
        else
        {
            B[i] = A[i] + B[i - 1];
        }
    }

    for (int i = N - 1; i >= 0; i--)
    {
        cout << B[i] << " ";
    }
    return 0;
}
