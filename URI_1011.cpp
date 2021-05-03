#include<iostream>
#include<iomanip>
using namespace std;

int main () {

double R, pi ,VOLUME;
pi = 3.14159;

cin>>R;

VOLUME = (4.0/3.0) * pi * R * R * R;

cout << fixed << setprecision(3) << "VOLUME = " << VOLUME << endl;


return 0;
}
