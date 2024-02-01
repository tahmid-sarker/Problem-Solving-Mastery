#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    while(getline(cin, str))
    {
        int count = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] != ' ')
            {
                count++;
                if(str[i] > 96 && count % 2 == 1)
                {
                    str[i] -= 32;
                }
                else if(str[i] < 96 && count % 2  == 0)
                {
                    str[i] += 32;
                }
            }
        }
        cout << str << endl;
    }
    return 0;
}