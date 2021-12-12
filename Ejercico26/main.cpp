#include <iostream>

using namespace std;

int main()
{
    unsigned int num1; unsigned int num2; unsigned int num3;
    cout << "Ingrese primer numero natural: ";
    cin >> num1;
    cout << "Ingrese segundo numero natural: ";
    cin >> num2;
    cout << "Ingrese tercer numero natural: ";
    cin >> num3;
    if ((num1+num2)>num3 && (num2+num3)>num1 ){
        if ((num1+num3)> num2){
            if ((num2 == num3)|| (num2 == num1)) {
                if (num2 == num3 && num2 == num1){
                    cout << "Se forma un triangulo equilatero." << endl;
                }
                else {
                cout << "Se forma un triangulo isosceles" << endl;
                }
            }
            else if(num3==num1){
                cout << "Se forma un triangulo isosceles" << endl;
            }
            else{
                cout << "Se forma un triangulo escaleno." << endl;
            }
        }
        else{
            cout << "Las longitudes ingresadas no forman un triangulo." << endl;
        }
    }
    else {
        cout << "Las longitudes ingresadas no forman un triangulo." << endl;

    }
    //cout << "Hello World!" << endl;
    return 0;
}
