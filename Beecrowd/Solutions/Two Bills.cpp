#include<iostream>
using namespace std;

int main()
{
    long long int N, M, Difference;
    while(cin >> N >> M)
    {
        if(M == 0 && N == 0)
            break;
        Difference = M - N;
        int count = 0;
        if(Difference >= 100)
        {
            Difference -= 100;
            count++;
        }
        if(Difference >= 50 && Difference < 100)
        {
            Difference -= 50;
            count++;
        }
        if(Difference >= 20 && Difference < 50)
        {
            Difference -= 20;
            count++;
        }
        if(Difference >= 10 && Difference < 20)
        {
            Difference -= 10;
            count++;
        }
        if(Difference >= 5 && Difference < 10)
        {
            Difference -= 5;
            count++;
        }
        if(Difference >= 2 && Difference < 5)
        {
            Difference -= 2;
            count++;
        }
        if(count == 2 && Difference == 0)
        {
            cout << "possible" << endl;
        }
        else
        {
            cout << "impossible" << endl;
        }
    }
    return 0;
}