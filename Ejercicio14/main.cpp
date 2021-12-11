#include <iostream>

using namespace std;

int main()
{
    unsigned short int con = 1;
    while (con <= 50) {
        cout << 50-(50-con) << "  ";
        cout << 50-(con-1) << endl;
        con = con + 1;
    }
    //cout << "Hello World!" << endl;
    return 0;
}
