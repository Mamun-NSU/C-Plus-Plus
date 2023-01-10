#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[200001];
    cin >> str;
    int n = strlen(str);
    int ans;
    int firstPosition = n;
    int lastPosition = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
        {
            if (i < firstPosition)
                firstPosition = i;
        }
        if (str[i] == 'Z')
        {
            if (i > lastPosition)
                lastPosition = i;
        }
    }

    ans = lastPosition - firstPosition + 1;
    cout << ans;

    return 0;
}