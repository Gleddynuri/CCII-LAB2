
//PROBLEMA 1
#include <iostream>

using namespace std;
#include<vector>
int sum1(vector<int> &a, int n){
    if(n==0){//caso inicial
        return 0;
    }
    return sum1(a,n-1)+ a[n-1];//recursividad
}
int sum2(vector<int> &a, int n){//iterativo
    int sum2=0;
    for(int i=0;i<n;i++){
        sum2+= a[i];
    }
    return sum2;
}

int main(){
    int n=10000;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        a[i]=1;
    }
    cout<<sum2(a,n)<<endl;
    cout<<sum1(a,n)<<endl;


    return 0;
}

