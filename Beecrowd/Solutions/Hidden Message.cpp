#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();
    while(N--)
    {
        char str[51];
        cin.getline(str, 51);
        if(str[0] > 96 && str[0] < 123)
        {
            cout << str[0];
        }
        for(int i = 1; i < strlen(str); i++)
        {
            if(str[i] > 96 && str[i] < 123)
            {
                if(str[i - 1] < 96 || str[i - 1] > 123)
                {
                    cout << str[i];
                }
            }
        }
        cout << endl;
    }
    return 0;
}