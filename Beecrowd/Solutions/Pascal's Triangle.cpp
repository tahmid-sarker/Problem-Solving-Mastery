#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        long long int sum = pow(2, N) - 1;
        cout << sum << endl;
    }
    return 0;
}