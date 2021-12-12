#include <iostream>

using namespace std;

int main()
{
    unsigned int num = 4 ; float result=0;
    /*
    cout << "Numero de elementos de la aproximacion: ";
    cin >> num;
    */
    for (unsigned int i =1; i< num+1; i++){
        if(i%2==0){
            result -= (4.0/((i*2.0)-1.0));
        }
        else{
            result += (4.0/((i*2.0)-1.0));
        }
    }
    cout << "pi es aproximadamente: " << result << endl;
    //cout << "Hello World!" << endl;
    return 0;
}
