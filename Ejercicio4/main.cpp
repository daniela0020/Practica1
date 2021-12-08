#include <iostream>

using namespace std;

int main()
{
    float num1; float num2;
    cout << "Ingrese primer numero: ";
    cin >> num1;
    cout << "Ingrese segundo numero: ";
    cin >> num2;
    if (num1>num2) {
        cout << "El menor es " << num2 << endl;
    }
    else if (num1 == num2) {
        cout << "Son iguales" << endl;
    }
    else {
        cout << "El menor es " << num1 << endl;
    }
    //cout << "Hello World!" << endl;
    return 0;
}
