#include <iostream>

using namespace std;

int main()
{
    unsigned int num;unsigned int fact = 1; float suma=1.0;
    cout << "Numero de elementos de la aproximacion: ";
    cin >> num;
    for (unsigned int con=1; con < num; con++){
        fact = 1;
        for (unsigned conin=1; conin<con+1; conin++){
            fact = fact*conin;
        }
        suma = suma + (1.0/fact);
    }
    cout << "e es aproximadamente: "<< suma << endl;
    //cout << "Hello World!" << endl;
    return 0;
}
