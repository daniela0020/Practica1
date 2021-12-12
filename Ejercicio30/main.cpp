#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    unsigned int valor; unsigned int num; unsigned int con = 1;
    valor = rand() % 100;
    while (true){
        cout << "Que numero es ?: ";
        cin >> num;
        if (num > valor){
            cout << num <<" es mayor que el numero deseado." << endl;
        }
        else if(num< valor){
            cout << num << " menor que el numero deseado." << endl;
        }
        else{
            cout << "Adivinaste." << endl;
            cout << "Numero de intentos: " << con << endl;
            break;
        }
        con += 1;
    }
    //cout << "Hello World!" << endl;
    return 0;
}
