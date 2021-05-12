#include<iostream>

using namespace std;

int main ()
{
    int a, b, c, aux, i, j;
    int v[3];

    cin >> a >> b >> c;

    v[0] = a;
    v[1] = b;
    v[2] = c;

    for (i = 0; i < 3; i ++){
        for (j = 0; j < 3; j ++){

            if (v[i] < v [j] ){

                aux = v[j];
                v[j] = v[i];
                v[i] = aux;

            }

        }
    }

    cout << v[0] << endl << v[1] << endl << v[2] << endl << endl;
    cout << a << endl << b << endl << c << endl;

    return 0;
}
