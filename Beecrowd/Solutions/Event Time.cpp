#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Day, W, Hour, X, Minute, Y, Second, Z;
    scanf("Dia %d", &Day);
    scanf("%d : %d : %d\n", &Hour, &Minute, &Second);
    scanf("Dia %d", &W);
    scanf("%d : %d : %d\n", &X, &Y, &Z);
    Day = W - Day;
    Hour = X - Hour;
    Minute = Y - Minute;
    Second = Z - Second;
    if(Second < 0)
    {
        Second += 60;
        Minute--;
    }
    if(Minute < 0)
    {
        Minute += 60;
        Hour--;
    }
    if(Hour < 0)
    {
        Hour += 24;
        Day--;
    }
    cout << Day << " dia(s)" << endl;
    cout << Hour << " hora(s)" << endl;
    cout << Minute << " minuto(s)" << endl;
    cout << Second << " segundo(s)" << endl;
    return 0;
}