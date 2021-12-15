#include <iostream>

using namespace std;

int main()
{
    unsigned int N = 2, conta = 1, suma = 0;;
    while(N%2 == 0){
        cout << "Ingrese un numero impar para la espiral: " ;
        cin >> N;
    }
    for(unsigned int j=1; j<=N; j++){
        for(unsigned int i=1; i<=(N*N); i++){
            if(j==1 && i<=1 ){
                suma += i;
            }
            if((j>=2) && (i%conta==0) && (i>((conta-1)*(conta-1)) && i<=((conta+1)*(conta+1)))){
                suma += (i+1);
            }
        }
        if(conta==1)conta +=1;
        else conta +=2;
    }
    cout << "En una espiral de "<<N<<"X"<<N<<", la suma es: "<<suma<<endl;

    //cout << "Hello World!" << endl;
    return 0;
}
