#include <bits/stdc++.h>
using namespace std;

int lon(char* cadena)//recursiva
{
    if (*cadena == '\0')
        return 0;
    else
        return 1 + lon(cadena + 1);
}
int long2(char* cadena){//iterativa
    int long2=0;
    while(*cadena != '\0'){
       long2+=1;
       cadena++;
    }
    return long2;
}
int main()
{
    char cadena[] = "HolaMundo";
    cout << lon(cadena)<<endl;
    cout << long2(cadena);
    return 0;
}
