#include<iostream>
using namespace std;

int main()
{
    int N;
    while(cin >> N && N != 0)
    {
        int sum = 0;
        for(int i = 1; i <= N; i++)
        {
            if(sum + i <= N)
            {
                sum += i;
            }
        }
        cout << sum << " " << N - sum << endl;
    }
    return 0;
}