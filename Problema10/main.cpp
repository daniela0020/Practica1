#include <iostream>

using namespace std;

int main()
{
    unsigned int num; bool noprimo = false; unsigned int i; unsigned int fact;
    cout << "Ingrese un numero natural: ";
    cin >> num;
    for (i = 2; i <= num ; i++ ) {
            for (unsigned int con = 2; con<=(i/2) ; con++ ) {
                if (i % con == 0){
                    noprimo = true;
                    break;
                }
            }
            if (noprimo == false ) {
                if (num % i == 0) {
                    fact = i;
                }
            }
            noprimo = false;
        }
    cout << "El mayor factor primo de " << num << " es: " << fact << endl;
    //cout << "Hello World!" << endl;
    return 0;
}
