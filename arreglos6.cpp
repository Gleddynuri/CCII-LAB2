#include <iostream>
#include <fstream>
using namespace std;

void leer(char *a, int n){
    ifstream f;
    f.open("E:\\CS COMPUTACION\\TERCER SEMESTRE\\CCII\\LABORATORIO\\array.txt");
    for(int i=0; i<n;i++){
        f >>a[i];
    }
    f.close();
}
void mostrar(char *a, int n)
{
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void ordenamiento(char *a, int n){
    char aux;
    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (a[i] > a[j]) {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
}
int main()
{
    int n=100000;
    char *a=new char [n]; //puntero
    leer(a, n);
    ordenamiento(a,n);
    mostrar(a,n);
    delete []a;
    return 0;
}

