#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == N / 2 && j == N / 2)
            {
                cout << "X";
            }
            else if (i == j)
            {
                cout << "\\";
            }
            else if (i + j == N - 1)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}