#include <iostream>

using namespace std;

int main()
{
    unsigned int num; bool nomcm = false; unsigned int n = 1;
    cout << "Ingrese numero natural: ";
    cin >> num;
    while(true){
        for (unsigned int i = 2; i <= num ; i++ ) {
            if (n % i != 0) {
               nomcm = true;
               break;
            }
        }
        if (nomcm == false) {
            cout << "El minimo comun multiplo es: "<< n << endl;
            break;
        }
        nomcm = false;
        n += 1;

    }
    //cout << "Hello World!" << endl;
    return 0;
}
