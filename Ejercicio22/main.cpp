#include <iostream>

using namespace std;

int main()
{
    unsigned int segundos; unsigned int horas; int minutos;
    cout << "Ingrese una cantidad entera de segundos: ";
    cin >> segundos;
    horas = (segundos/60)/60;
    minutos = (segundos/60)-120;
    if (minutos < 0) {
        minutos = -minutos;
    }
    segundos = segundos - (int(segundos/60)*60);
    cout << horas << ":" << minutos << ":" << segundos << endl;
    //cout << "Hello World!" << endl;
    return 0;
}
