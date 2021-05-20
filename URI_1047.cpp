#include<iostream>

using namespace std;
int main()
{
    int a, b, c, d;
    int aux;

    cin >> a >> c >> b >> d;

    aux = ((b*60)+d) - ((a*60)+c);

    if(aux<=0)

        aux += 24*60;
        cout << "O JOGO DUROU " << aux/60 << " HORA(S) E " << aux%60 << " MINUTO(S)" << endl;

    return 0;
}
