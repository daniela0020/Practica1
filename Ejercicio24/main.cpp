#include <iostream>

using namespace std;

int main()
{
    unsigned int num; unsigned int con = 1;bool eval;

    cout << "Ingrese un numero natural: ";
    cin >> num;

    while (con <= (num*num)){
        if (con<num || con > ((num*num)-num)) {
            cout << "+";
        }
        else if (con % num == 0){
            cout << "+" << endl;
            eval = true;
        }
        else if (eval == true){
            cout << "+";
            eval = false;
        }
        else {
            cout << " ";
        }
        con = con +1;
    }
    //cout << "Hello World!" << endl;
    return 0;
}
