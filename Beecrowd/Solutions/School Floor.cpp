#include<iostream>
using namespace std;

int main()
{
    int L, C;
    while(cin >> L >> C && L != 0 && C != 0)
    {
        int type_1 = L * C + (L - 1) * (C - 1);
        int type_2 = (L - 1) * 2 + (C - 1) * 2;
        cout << type_1 << endl;
        cout << type_2 << endl;
    }
    return 0;
}