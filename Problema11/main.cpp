#include <iostream>

using namespace std;

int main()
{
    unsigned int num; unsigned int i; bool noprimo = false;
    unsigned int sum = 0;
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
                sum += i;
            }
            noprimo = false;
        }
    cout << "El resultado de la suma es: " << sum << endl;
    //cout << "Hello World!" << endl;
    return 0;
}
