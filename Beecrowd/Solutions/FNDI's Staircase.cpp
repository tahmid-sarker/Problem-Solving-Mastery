#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int N, H, C, L;
    while(cin >> N >> H >> C >> L)
    {
        float area = N * sqrt(pow(H, 2) + pow(C, 2)) * L / 10000; //1 Square Meter = 10000 Squre Centimeters
        cout << fixed << setprecision(4) << area << endl;
    }
    return 0;
}