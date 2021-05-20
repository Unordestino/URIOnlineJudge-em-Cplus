#include<iostream>

using namespace std;

int main ()
{
    float n1, n2, n3, n4, n5, n6;
    int m1;

    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;

    if (n1 >= 0)
    {
        m1++;
    }

        if (n2 >= 0)
    {
        m1++;
    }

        if (n3 >= 0)
    {
        m1++;
    }

        if (n4 >= 0)
    {
        m1++;
    }

        if (n5 >= 0)
    {
        m1++;
    }

        if (n6 >= 0)
    {
        m1++;
    }

    cout << m1 << " valores positivos" << endl;

    return 0;
}
