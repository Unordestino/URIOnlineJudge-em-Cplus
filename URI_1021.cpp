#include <iostream>
#include<locale.h>
using namespace std;

int main()
{
cout<<fixed;
cout.precision (2);
    double resultado;
    cin >> resultado;

    int temp = resultado * 100;

    int t = temp / 100;
    int p = temp % 100;

    cout << "NOTAS:\n";
    int notas[6] = {100, 50, 20, 10, 5, 2};

    for (int i=0; i<6; i++){
        cout << t/notas[i] << " nota(s) de R$ "<< notas[i] <<".00\n";
        t = t%notas[i];
    }

    p = t*100 + p;

    cout << "MOEDAS:\n";
    int moedas[6] = {100, 50, 25, 10, 5, 1};

    for (int i=0; i<6; i++){
        cout << p/moedas[i] << " moeda(s) de R$ "<< moedas[i]/100.0 <<"\n";
        p = p%moedas[i];
    }



    return 0;

}

