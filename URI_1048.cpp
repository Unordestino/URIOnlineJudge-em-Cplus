#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double salario, percentual, resultado;

    cin >> salario;

    if(salario >= 0 && salario <= 400.00){
        percentual = 15;
        resultado = salario + ((salario * percentual) / 100);
    }
    else if(salario > 400.00 && salario <= 800.00){
        percentual  = 12;
        resultado = salario + ((salario * percentual) / 100);
    }
    else if(salario > 800.00 && salario <= 1200.00){
        percentual = 10;
        resultado  = salario + ((salario * percentual) / 100);
    }
    else if(salario > 1200 && salario <= 2000.00){
        percentual = 7;
        resultado = salario + ((salario * percentual) / 100);
    }
    else{
        percentual = 4;
        resultado = salario + ((salario * percentual) / 100);
    }

    cout << "Novo salario: " << fixed << setprecision(2) << resultado  << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << resultado - salario << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << percentual << " %" << endl;

    return 0;
}

