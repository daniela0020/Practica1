#include <iostream>

using namespace std;

int main()
{
    unsigned int n; bool noprimo = false; unsigned int num = 0; unsigned int i;
    cout << "Ingrese numero natural: ";
    cin >> n;
    for (i = 2; num < n ; i++ ) {
        for (unsigned int con = 2; con<=(i/2) ; con++ ) {
            if (i % con == 0){
                noprimo = true;
                break;
            }
        }
        if (noprimo == false ) {
            num += 1;
        }
        noprimo = false;
    }
    if (n == 0) {
        i = 1;
    }
    cout << "El primo numero " << n << " es: " << i-1 << endl;
    //cout << "Hello World!" << endl;
    return 0;
}
