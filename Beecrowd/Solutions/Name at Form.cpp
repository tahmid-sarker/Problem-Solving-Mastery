#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string L;
    getline(cin, L);
    if(L.length() <= 80)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}