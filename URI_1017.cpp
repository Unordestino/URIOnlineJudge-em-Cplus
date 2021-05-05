#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int temp_gasto, velocidade;
    double km ;

    cin >> temp_gasto;
    cin >> velocidade;

    km = velocidade * temp_gasto;

    cout << fixed << setprecision(3) << km/12 << endl;


    return 0;
}
