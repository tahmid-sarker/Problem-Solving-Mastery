#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string A, B;
    for(int i = 1; i <= N; i++)
    {
        cin >> A >> B;
        if(A == B)
        {
            cout << "Caso #" << i << ": De novo!" << endl;
        }
        else if(A == "tesoura" && B == "papel") //1
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else if(A == "papel" && B == "pedra") //2
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else if(A == "pedra" && B == "lagarto") //3
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else if(A == "lagarto" && B == "Spock") //4
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else if(A == "Spock" && B == "tesoura") //5
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else if(A == "tesoura" && B == "lagarto") //6
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else if(A == "lagarto" && B == "papel") //7
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else if(A == "papel" && B == "Spock") //8
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else if(A == "Spock" && B == "pedra") //9
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else if(A == "pedra" && B == "tesoura") //10
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else
        {
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
    }
    return 0;
}