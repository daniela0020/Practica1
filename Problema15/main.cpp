#include <iostream>

using namespace std;

int main()
{
    unsigned int K; unsigned int con = 1; unsigned int nutri = 0;

    cout << "Numero minimo de divisores: ";
    cin >> K;

    for (unsigned int num = 2; true ; num++ ) {
        nutri = num*(num+1);
        nutri = nutri / 2; // no entiendo porque cuando k es 4 esta division simpre da 28 auque num sea 1 y nutri sea 6.
        for (unsigned int i = (nutri/2); i>=1 ; i--) {
            if(nutri % i==0){
                con += 1;
            }
        }
        if (con>K) {
            cout << "El numero es " << nutri << " que tiene " << con << " divisores." << endl;
            break;
        }
        con = 1;
    }

    //cout << "Hello World!" << endl;
    return 0;
}
