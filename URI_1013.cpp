#include<iostream>

using namespace std;

int main (){
    int A , B , C , MAIORAB, MAIOR;

    cin >> A >> B >> C;

    MAIORAB  = ( A + B + abs(A - B) )/ 2;
    MAIOR = ( C + MAIORAB + abs( MAIORAB - C ) )/2;

    cout << MAIOR << " eh o maior"<<endl;

    return 0;
}
