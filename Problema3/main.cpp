#include <iostream>

using namespace std;

int main()
{
    unsigned int dia; unsigned int mes;
    cout << "Ingrese dia como un numero: ";
    cin >> dia;
    cout << "Ingrese mes como un numero: ";
    cin >> mes;
    if (mes <= 7){
        if ((mes%2) != 0){
            if (dia<=31){
                cout << dia << "/" << mes << " es una fecha valida."<< endl;
            }
            else{
                cout << dia << "/" << mes << " es una fecha invalida."<< endl;

            }
        }
        else{
            if (dia <= 30){
                if (mes == 2){
                    if (dia == 29){
                        cout << dia << "/" << mes << " es valida en bisiesto."<< endl;
                    }
                    else if (dia<29){
                        cout << dia << "/" << mes << " es una fecha valida."<< endl;
                    }
                    else{
                        cout << dia << "/" << mes << " es una fecha invalida."<< endl;
                    }
                }
                else{
                    cout << dia << "/" << mes << " es una fecha valida."<< endl;
                }
            }

            else{
                cout << dia << "/" << mes << " es una fecha invalida."<< endl;
            }
        }
    }
    if (mes>7 && mes<13){
        if ((mes%2) == 0){
            if (dia<=31){
                cout << dia << "/" << mes << " es una fecha valida."<< endl;
            }
            else{
                cout << dia << "/" << mes << " es una fecha invalida."<< endl;

            }
        }
        else{
            if (dia <= 30){
                cout << dia << "/" << mes << " es una fecha valida."<< endl;
            }
            else{
                cout << dia << "/" << mes << " es una fecha invalida."<< endl;
            }
        }
    }
    if (mes>12){
        cout << dia << "/" << mes << " es una fecha invalida."<< endl;

    }
    //cout << "Hello World!" << endl;
    return 0;
}
