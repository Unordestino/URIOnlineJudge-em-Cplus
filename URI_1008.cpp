#include<iostream>
#include<iomanip>

using namespace std;

int main (){

    int funcionario;
    float horas,salario;

    cin >> funcionario;
    cin >> horas;
    cin >> salario;

    salario = salario * horas;

    cout << "NUMBER = " << funcionario <<endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario <<endl;


    return 0;
}
