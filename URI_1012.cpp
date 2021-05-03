#include<iostream>
#include<iomanip>

using namespace std;

int main (){
    double A, B, C , triangulo , raio , trapezio , quadrado , retangulo;

    cin >> A >> B >> C;

    triangulo = (A/2) * C;
    cout << "TRIANGULO: " << fixed << setprecision(3) << triangulo << endl;

    raio = C * C* 3.14159 ;
    cout << "CIRCULO: " << fixed << setprecision(3) << raio  <<endl;

    trapezio = (A+B) * (C/2) ;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezio  <<endl;

    quadrado = B * B;
    cout << "QUADRADO: " << fixed << setprecision(3) << quadrado  <<endl;

    retangulo = A*B;
    cout << "RETANGULO: " << fixed << setprecision(3) << retangulo  <<endl;

    return 0;
}
