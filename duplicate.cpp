#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    int N;
    cin >> N;
    int A[N];
    int flag = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
            if (A[i] == A[j])
            {
                flag = 1;
                break;
            }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
