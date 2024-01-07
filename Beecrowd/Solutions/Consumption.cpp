#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float X, Y, Result;
    cin >> X >> Y;
    Result = (float) X / Y;
    cout << fixed << setprecision(3) << Result << " km/l" << endl;
    return 0;
}