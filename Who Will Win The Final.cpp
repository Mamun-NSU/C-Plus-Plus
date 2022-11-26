#include <iostream>

using namespace std;

void MyComp(char *s1, char *s2)
{

    int A = 0, B = 0;

    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == '1')
            A++;
    }

    for (int i = 0; s2[i] != '\0'; i++)
    {
        if (s2[i] == '1')
            B++;
    }

    if (A > B)
    {
        cout << "Argentina \n";
    }
    else if (B > A)
    {
        cout << "Brazil \n";
    }
    else
    {
        cin >> s1 >> s2;
        MyComp(s1, s2);
    }
}

int main()
{

    int A, B;
    char str1[10], str2[10];

    cin >> A >> B;

    if (A > B)
    {
        cout << "Argentina \n";
    }
    else if (B > A)
    {
        cout << "Brazil \n";
    }
    else
    {
        cin >> str1 >> str2;
        MyComp(str1, str2);
    }

    return 0;
}