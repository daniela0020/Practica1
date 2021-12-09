#include <iostream>

using namespace std;

int main()
{
   float N; unsigned short int con1 = 1; unsigned short int con = 0; float poten = 1;char op = 94;
   cout << "ingrese numero: ";
   cin >> N;
   while (con1<=5) {
       while (con < con1) {
           poten = N * poten;
           con = con + 1;
       }
       cout << N << op << con1 << "= "<< poten << endl;
       con1 = con1 + 1;
   }
   return 0;
}
