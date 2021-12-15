#include <iostream>

using namespace std;

int main()
{
    unsigned int num = 999; unsigned int dig = 0; unsigned int sum = 0; unsigned int copia;
    unsigned int n=1; unsigned int mul; bool pal = false;
    for(num; num >= 900; num-=1){
        for ( unsigned int i=num;900 <= i ; i-- ) {
            mul = i*num;
            copia = mul/10;
            while (copia>0) {
                n = n*10;
                copia = copia / 10;
            }
            copia = mul;
            while (copia > 0) {
                dig = copia % 10;
                copia = copia / 10;
                sum = sum + (dig*n);
                n = n/10;
            }
            if (sum == mul) {
                cout << num << "*" << i << "=" << mul << endl;
                pal = true;
                break;
            }
            dig = 0;
            n=1;
            sum =0;
        }
        if (pal == true) {
            break;
        }
        pal = false;

    }
    //cout << "Hello World!" << endl;
    return 0;
}
