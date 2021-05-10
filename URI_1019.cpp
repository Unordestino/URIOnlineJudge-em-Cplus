#include<iostream>

using namespace std;

int main ()
{
    int T, H, H_S, M, S;

    H_S = 3600;

    cin >> T;

    H = (T/H_S);

    M = (T - ( H_S * H )) / 60;

    S = (T - (H_S * H) - (M * 60)  );

    cout << H << ":" << M << ":" << S << endl;



    return 0 ;
}
