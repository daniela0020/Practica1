#include <iostream>

using namespace std;

int main()
{
   unsigned int num; unsigned int con = 1;
   cout << "Ingresa un mumero entero positivo: ";
   cin >> num;
   while (con <= num/2 || num == 1) {
       if ((con*con) == num) {
           cout << num << " es un cuadrado perfecto." << endl;
           break;
       }
       con = con + 1;
   }
   if (con > num/2 && con != 1){
       cout << num << " NO es un cuadrado perfecto." << endl;

   }

    //cout << "Hello World!" << endl;
    return 0;
}
