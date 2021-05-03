#include<iostream>
#include<iomanip>

using namespace std;

int main (){
    char nome [30];
    double salario, venda_total , total_final;

    cin>>nome;
    cin>>salario;
    cin>>venda_total;

    total_final = salario + venda_total * 0.15;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << total_final << endl;


    return 0;
}
