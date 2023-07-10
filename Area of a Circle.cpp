#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(9);

    double R;
    cin >> R;

    double area = R * R * 3.141592653;

    cout << area << endl;

    return 0;
}