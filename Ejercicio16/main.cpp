#include <iostream>

using namespace std;

int main()
{
    float num; float suma; unsigned int con = 1;
    cout << "Ingrese un numero: ";
    cin >> num;
    suma = num;
    while (num != 0){
        cout << "Ingrese un numero: ";
        cin >> num;
        if (num == 0){
            break;
        }
        suma = suma + num;
        con = con + 1;
    }
    cout << "El promedio es: "<<suma/con << endl;
    //cout << "Hello World!" << endl;
    return 0;
}
