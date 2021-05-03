#include<iostream>
#include<iomanip>

using namespace std;

int main (){
    int produto1, unidade1 ;
    int produto2, unidade2 ;
    float preco1, preco2;

    cin >> produto1 >> unidade1 >> preco1;
    cin >> produto2 >> unidade2 >> preco2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (unidade1*preco1) + (unidade2*preco2) <<endl ;

    return 0;
}
