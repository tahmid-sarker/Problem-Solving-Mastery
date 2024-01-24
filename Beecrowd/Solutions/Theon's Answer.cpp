#include<iostream>
using namespace std;

int main()
{
    int N, T, min = 2970, count = 0;
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        cin >> T;
        if(T < min)
        {
            min = T;
            count = i;
        }
    }
    cout << count << endl;
    return 0;
}