#include <iostream>

using namespace std;

int main()
{   float A; int B; char op = 94;
    float poten = 1;

    cout << "Ingrese primer numero  (A): ";
    cin >> A;
    cout << "Ingrese segundo numero (B) debe ser un entero: ";
    cin >> B;
    int con = 0;
    if (B < 0) {
        B = -1*B;
        while (con < B) {
            poten = A * poten;
            con = con + 1;
        }
        poten = 1/poten;
    }
    else {
        while (con < B) {
            poten = A * poten;
            con = con + 1;
        }

    }
    cout << A << op << B << "= " << poten << endl;
    //cout << "Hello World!" << endl;
    return 0;
}
