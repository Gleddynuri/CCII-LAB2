#include <iostream>
using namespace std;

void concatenar( const char *a, char *b ){
    while ( *b != '\0' ){
        ++b;
    }
    for ( ;( *b = *a ); ++b, ++a ){
        ;
        }
}
int main(){
     char a[100];
     char b[100];
     cout << "Ingrese cadena a: ";
     cin >> a;
     cout << "Ingrese cadena b: ";
     cin >> b;
     concatenar( a, b );
     cout << b << endl;
 }


