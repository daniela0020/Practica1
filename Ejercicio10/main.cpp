#include <iostream>

using namespace std;

int main()
{
    int N;  int mul;  int con;
    cout << "Ingrese numero entero: ";
    cin >> N;
    mul = 1;
    con = 1;
    while (mul <= 100 && mul>0) {
        mul = N*con;
        if (mul<= 100 && mul>0) {
            cout << mul << endl;
        }
        con = con + 1;

    }

    return 0;
}

