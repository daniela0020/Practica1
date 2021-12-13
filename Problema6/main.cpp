#include <iostream>

using namespace std;

int main()
{
    int a,b,suma=0; unsigned int c;
    cout << "Ingrese un numero entero: ";
    cin >> a;
    cout << "Ingrese un numero entero: ";
    cin >> b;
    cout << "Ingrese un numero natural: ";
    cin >> c;
    if (a<0){
      a = -a;
    }
    if (b<0){
        b = -b;
    }
    for (unsigned int i = 1; i<c; i++){
        if (i%a==0){
            suma = suma + i;
            cout <<  " + " << i;
        }
    }
    for (unsigned int i; i<c; i++){
        if ((i%b==0) && (i%a != 0)){
            suma = suma + i;
            cout << " + " << i;
        }
    }
    cout << " = " << suma << endl;
    //cout << "Hello World!" << endl;
    return 0;
}
