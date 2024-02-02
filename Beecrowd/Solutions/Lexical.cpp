#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char A[20], B[20];
    cin >> A >> B;
    if(strcmp(A, B) > 0)
    {
        cout << B << endl;
        cout << A << endl;
    }
    if(strcmp(A, B) < 0)
    {
        cout << A << endl;
        cout << B << endl;
    }
    return 0;
}