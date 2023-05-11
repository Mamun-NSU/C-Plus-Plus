#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;
    // Number for tast cases
    while (number--)
    {

        int arrNum, testCase;
        cin >> arrNum >> testCase;

        int arr[arrNum];

        for (int i = 0; i < arrNum; i++)
        {
            cin >> arr[i];
        }

        cout << "Case " << number++ << ":\n";

        while (testCase--)
        {

            int firstIndx, lastIndx;
            cin >> firstIndx >> lastIndx;

            int minValue = arr[firstIndx - 1];

            for (int i = firstIndx - 1; i < lastIndx; i++)
            {
                if (arr[i] < minValue)
                {
                    minValue = arr[i];
                }
            }
            cout << minValue;
            cout << "\n";
        }
    }

    return 0;
}