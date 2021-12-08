#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "ingrese un numero entero: ";
    cin >> numero;
    if (numero % 2 == 0) {
        cout << numero << " es par" << endl;

    }
    else {
        cout << numero << " es impar" << endl;
    }
   // cout << "Hello World!" << endl;
    return 0;
}
