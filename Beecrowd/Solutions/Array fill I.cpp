#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i <= 9; i++)
    {
        cout << "N[" << i << "]" << " = " << n << endl;
        n *= 2;
    }
    return 0;
}