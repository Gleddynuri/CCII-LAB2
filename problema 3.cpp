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

void quicksort(int a[], int primero, int ultimo){
    int i, j, central;
    int pivote;
    central = (primero + ultimo)/2;
    pivote = a[central];
    i = primero;
    j = ultimo;
    do {
    while (a[i] < pivote) i++;
    while (a[j] > pivote) j--;
    if (i <= j)
        {
        double tmp;
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp; // intercambia a[i] con a[j]
        i++;
        j--;
        }
    }while (i <= j);
    if (primero < j)
    quicksort(a, primero, j);
    if (i < ultimo)
    quicksort(a, i, ultimo);
}
int main(){
    int n=10000;
    int arr[n];
    srand(time(NULL));
    for(int i=0;i<n;i++){
        arr[i] = 1 + rand() % (10);
    }
    imprimir(arr,n);
    cout<<endl;
    quicksort(arr, 0,n-1);
    imprimir(arr,n);
}
