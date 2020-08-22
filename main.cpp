#include <iostream>
#include <windows.h>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
    cout<<"Acest program minunat scrie un sir litera cu litera in functie de numarul de secunde pe care i-l dai."<<endl;
    char str[500];
    cout<<"Scrie ce-ti doreste inima:";
    cin.get(str,500);
    int cont = strlen(str);
    int aux = 0;
    int seconds;
    cout<<"numar de secunde:";
    cin>>seconds;
    seconds*= pow(10,3) ;
    while(aux < strlen(str))
    {
        cout<<str[aux];
        Sleep((seconds) / cont);
        aux++;
    }
return 0;
}
