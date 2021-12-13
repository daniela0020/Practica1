#include <iostream>

using namespace std;

int main()
{
    unsigned int num; unsigned int nma = 1; unsigned int nme = 1; unsigned int sum1 = 0;
    unsigned int sum2=0;
    cout << "Ingrese un numero natural: ";
    cin >> num;
    while (nma < num) {
        sum1 = nma + nme;
        nme = nma;
        nma = sum1;
        if (nma%2 == 0 && nma < num){
            sum2 = sum2 + nma;
        }
    }
    cout << "El resultado de la suma es: "<<sum2 << endl;
    //cout << "Hello World!" << endl;
    return 0;
}
