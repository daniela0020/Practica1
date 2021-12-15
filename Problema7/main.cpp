#include <iostream>

using namespace std;

int main()
{
    int N; int sum = 0; unsigned int n = 10; unsigned int dig;
    unsigned int mul =1;
    cout << "Ingrese un numero entero N.";
    cin >> N;
    if (N<0) {
        N = -N;
    }
    while (N > 0) {
            dig = N % 10;
            N = N / 10;
            if (dig != 0) {
                for (unsigned int i=1; i <= dig ; i++ ) {
                    mul = mul*dig;
                }
            }
            else{
                mul = 0;
            }
            sum = sum + mul;
            mul = 1;
    }
    cout << "El resultado de la suma es: " << sum << endl;
    //cout << "Hello World!" << endl;
    return 0;
}
