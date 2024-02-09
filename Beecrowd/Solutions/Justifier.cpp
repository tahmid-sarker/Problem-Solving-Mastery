#include<iostream>
#include<string>
using namespace std;

int main()
{
    string x[50];
    int max = 0;
    int t,flag = 0;
    while(cin >> t && t != 0)
    {
        if(flag == 1)
            cout << endl;
        for(int j = 0; j < t; j++)
        {
            cin >> x[j];
            if(x[j].length() > max)
                {
                    max =  x[j].length();
                }
        }
        for(int i = 0; i < t; i++)
        {
            int g = x[i].length();
            for(int v = g; v < max; v++)
                {
                    cout<<" ";
                }
            cout<<x[i]<<endl;
        }
        max = 0;
        flag = 1;
    }
    return 0;
}