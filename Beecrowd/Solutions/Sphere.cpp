#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int R;
    double result;
    cin >> R;
    result = (4.0/3 * 3.14159 * pow(R, 3));
    cout << fixed;
    cout << setprecision(3) << "VOLUME = " << result << endl;
    return 0;
}