#include <iostream>

using namespace std;

int main()
{
    unsigned int N; unsigned long long int fact;
    cout << "ingrese numero entero: ";
    cin >> N;
    fact = N;
    unsigned int con = 1;
    while (con <= (N-2)) {
        fact = fact * (N-con);
        con = con +1;
    }
    cout << N << "!= "<< fact << endl;
    //cout << "Hello World!" << endl;
    return 0;
}
