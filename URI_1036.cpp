#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main ()
{
    double A, B, C, delta;

    cin >> A >> B >> C;

    delta = ((B * B) - (4*A*C));

    cout << fixed << setprecision(5);

    if (delta < 0 || A == 0){
      cout << "Impossivel calcular" << endl;
    }
    else{
      cout << "R1 = " << (- B + sqrt(delta)) / (2*A)<< endl;
      cout << "R2 = " << (- B - sqrt(delta)) / (2*A) << endl;
    }
    return 0;
}
