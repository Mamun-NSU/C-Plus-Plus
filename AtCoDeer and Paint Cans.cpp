#include <iostream>
using namespace std;

int main()
{
    int a, b, c, result = 0;
    int ans;
    cin >> a >> b >> c;

    if (a == b)
    {
        result++;
    }
    if (a == c)
    {
        result++;
    }
    if (b == c && a != b)
    {
        result++;
    }

    ans = 3 - result;
    cout << ans;

    return 0;
}