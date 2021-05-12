#include<iostream>
#include<iomanip>

using namespace std;

int main ()
{
    double R , A;
    double n = 3.14159;

    cin >> R;

    A = n * R * R;

    cout << fixed << setprecision(4) << "A =" << A << endl;
    cout << fixed << setprecision(4) << "A =" << n * R * R<< endl;


    return 0;
}
