#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        string str;
        cin >> str;
        int count = 0;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '0')
                count += 6;
            else if(str[i] == '1')
                count += 2;
            else if(str[i] == '2')
                count += 5;
            else if(str[i] == '3')
                count += 5;
            else if(str[i] == '4')
                count += 4;
            else if(str[i] == '5')
                count += 5;
            else if(str[i] == '6')
                count += 6;
            else if(str[i] == '7')
                count += 3;
            else if(str[i] == '8')
                count += 7;
            else if(str[i] == '9')
                count += 6;
        }
        cout << count << " leds" << endl;
    }
    return 0;
}