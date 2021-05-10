#include<iostream>

using namespace std;

int main ()
{
    int idade;

    cin >> idade;

    cout << idade / 365 << " ano(s)" <<endl;

    idade = idade % 365;

    cout << idade / 30 << " mes(es)" << endl;

    idade = idade % 30;

    cout << idade << " dia(s)" << endl;

    return 0;
}

