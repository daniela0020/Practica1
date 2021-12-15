#include <iostream>

using namespace std;

int main()
{
    unsigned int K; int serie; unsigned int con = 1; unsigned int semilla;
    unsigned int max = 0;
    cout << "Ingrese un numero natural: ";
    cin >> K;

    for (unsigned int num=K; num >0 ; num-- ) {
        serie = num;
        //cout << " num:" << num;
        while ( serie != 1) {
            if (serie % 2 == 0) {
                serie = serie/2;
            }
            else{
                serie = (3*serie)+1;
            }
            //cout <<" " << serie << " ";
            con += 1;
        }
        if (con > max) {
            semilla = num;
            max = con;
        }
        //cout << " con:" << con << " ";
        con = 1;
    }
    cout << "La serie mas larga es con la semilla " << semilla << ", teniendo " << max << " terminos." << endl;
    //cout << "Hello World!" << endl;
    return 0;
}
