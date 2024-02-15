#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int size_s1, size_s2;
    string s1, s2;
    while(getline(cin, s1) && getline(cin, s2))
    {
        size_s1 = s1.size(); size_s2 = s2.size();
        cout << "$";
        for(int i = 0; i < size_s1; ++i)
        {
            if((size_s1 - i) % 3 == 0 && i > 0)
                cout << ",";
            cout << s1[i];
        }       
        cout << ".";
        if(size_s2 < 2)
            cout << "0";
        for(int i = 0; i < size_s2; ++i)
            cout << s2[i];
        cout << endl;
    }
    return 0;
}