#include <iostream>

using namespace std;

int main()
{
    unsigned int num; unsigned int dig = 0; unsigned int sum = 0; unsigned int copia;
    unsigned int n=1;
    cout << "Ingrese un numero entero: ";
    cin >> num;
    copia = num/10;
    while (copia>0) {
        n = n*10;
        copia = copia / 10;
    }
    copia = num;
    while (copia > 0) {
        dig = copia % 10;
        copia = copia / 10;
        sum = sum + (dig*n);
        n = n/10;
    }
    if (sum == num) {
        cout << num << " es un numero palindromo." << endl;

    }
    else {
        cout << num << " NO es un numero palindromo." << endl;
    }
    //cout << "Hello World!" << endl;
    return 0;
}
