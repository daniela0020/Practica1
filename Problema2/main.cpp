#include <iostream>

using namespace std;

int main()
{
    unsigned int cantidad;
    unsigned int ciclo = 0;
    cout << "Cantidad deseada: ";
    cin >> cantidad;
    ciclo = cantidad / 50000;
    if (ciclo != 0){
        cantidad = cantidad - (50000*ciclo);
    }
    cout << 50000 << " : " << ciclo << endl;
    ciclo =cantidad / 20000;
    if (ciclo != 0){
        cantidad = cantidad - (20000*ciclo);
    }
    cout << 20000 << " : " << ciclo << endl;
    ciclo = cantidad / 10000;
    if (ciclo != 0){
        cantidad = cantidad - (10000*ciclo);
    }
    cout << 10000 << " : " << ciclo << endl;
    ciclo = cantidad / 5000;
    if (ciclo != 0){
        cantidad = cantidad - (5000*ciclo);
    }

    cout << 5000 << " : " << ciclo << endl;
    ciclo = cantidad / 2000;
    if (ciclo != 0){
        cantidad = cantidad - (2000*ciclo);
    }
    cout << 2000 << " : " << ciclo << endl;
    ciclo = cantidad / 1000;
    if (ciclo != 0){
        cantidad = cantidad - (1000*ciclo);
    }
    cout << 1000 << " : " << ciclo << endl;
    ciclo = cantidad / 500;
    if (ciclo != 0){
        cantidad = cantidad - (500*ciclo);
    }
    cout << 500 << " : " << ciclo << endl;
    ciclo = cantidad /200;
    if (ciclo != 0){
        cantidad = cantidad - (200*ciclo);
    }
    cout << 200 << " : " << ciclo << endl;
    ciclo = cantidad / 100;
    if (ciclo != 0){
        cantidad = cantidad - (100*ciclo);
    }
    cout << 100 << " : " << ciclo << endl;
    ciclo = cantidad / 50;
    if (ciclo != 0){
        cantidad = cantidad - (50*ciclo);
    }
    cout << 50 << " : " << ciclo << endl;
    cout << "Faltante: " << cantidad << endl;
    //cout << "Hello World!" << endl;
    return 0;
}
