#include<iostream>
#include<iomanip>
using namespace std;

int main (){
setlocale(LC_ALL, "");

double area ,R;

cin>>R;

area =  3.14159 *R *R;

cout<<"A="<<fixed<<setprecision(4)<<area<<endl;


return 0;

}

