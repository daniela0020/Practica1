#include <iostream>

using namespace std;

int main()
{
    char val = 37; bool eval = false;
    cout << "Ingrese un caracter: ";
    cin >> val;
    for (char val1 = 65; val1 <=90; ++val1){
        if (val1 == val) {
            eval = true;
            if(val1 == 65 || val1 == 69){
                cout << val << " es una vocal." << endl;
                break;
            }
            else if (val1 == 73 || val1 == 79 ){
                cout << val << " es una vocal." << endl;
                break;
            }
            else if (val1 == 85){
                cout << val << " es una vocal." << endl;
                break;
            }
            else{
                cout << val << " es una consonante." << endl;
            }

        }
    }
    if (eval == false) {
        for (char val1 = 97; val1 <=122; ++val1){
            if (val1 == val) {
                eval = true;
                if(val1 == 97 || val1 == 101){
                    cout << val << " es una vocal." << endl;
                    break;
                }
                else if (val1 == 105 || val1 == 111 ){
                    cout << val << " es una vocal." << endl;
                    break;
                }
                else if (val1 == 117){
                    cout << val << " es una vocal." << endl;
                    break;
                }
                else{
                    cout << val << " es una consonante." << endl;
                }
            }

        }
    }
    if (eval == false) {
        cout << "no es una letra." << endl;
    }
    //cout << "Hello World!" << endl;
    return 0;
}
