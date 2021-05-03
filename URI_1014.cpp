#include <iostream>
#include<iomanip>

using namespace std;

int main ()
{
    int distancia_perco;
    double consumo;

    cin >> distancia_perco >> consumo;
    cout << fixed << setprecision (3) << distancia_perco / consumo <<  " km/l" << endl;

    return 0;

}
