#include <iostream>
#include<stdlib.h>
#include <time.h>
using namespace std;


void imprimir(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

// funcion de inversacon aux
void inversa(int arr[], int n)//iterativa
{
    int aux[n];
    for (int i = 0; i < n; i++) {
        aux[n - 1 - i] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = aux[i];
    }
}

void inversa2(int arr[], int i, int n)//recursiva
{

    if (i >= n) {
        return;
    }
    int value = arr[i];
    inversa2(arr, i + 1, n);

    arr[n - i - 1] = value;
}
int main()
{
    int n=10000;
    int arr[n];
    srand(time(NULL));
    for(int i=0;i<n;i++){
        arr[i] = 1 + rand() % (10);
    }
    inversa(arr, n);
    imprimir(arr, n);
    cout<<endl;
    inversa2(arr, 0, n);
    imprimir(arr, n);
    return 0;
}

