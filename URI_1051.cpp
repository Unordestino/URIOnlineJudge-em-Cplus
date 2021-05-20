#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    double valor1;
    double aux;

    cin >> valor1;

    if(valor1 >= 0.00 && valor1 <= 2000.00)
    {
        cout << "Isento" << endl;
    }
    else if(valor1 > 2000.00 && valor1 <= 3000.00)
    {
        aux = ((valor1 - 2000.00)*0.08);
        cout << "R$ " << fixed << setprecision(2) << aux << endl;

    }

    else if(valor1 > 3000.00 && valor1 <= 4500.00)
    {

        aux = (((valor1 - 3000.00)*0.18 + 1000.00*0.08));
        cout << "R$ " << fixed << setprecision(2) << aux << endl;
    }
    else
    {
        aux = (((valor1 - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08));
        cout << "R$ " << fixed << setprecision(2) << aux << endl;
    }
    return 0;
}

