#include<iostream>

using namespace std;

int main (){

    string tipo1;
    string tipo2;
    string tipo3;

    cin >> tipo1 >> tipo2 >> tipo3;

    if (tipo1 == "vertebrado"){
    if (tipo2 == "mamifero"){
    if (tipo3 == "onivoro"){
        cout << "homem" << endl;
            }
        else{
        cout << "vaca" << endl;
            }
        }
        }

    if (tipo1 == "vertebrado"){
    if (tipo2 == "ave"){
    if (tipo3 == "carnivoro"){
        cout << "aguia" << endl;
            }
        else{
        cout << "pomba" << endl;
            }
        }
        }

    if (tipo1 == "invertebrado"){
    if (tipo2 == "inseto"){
    if (tipo3 == "hematofago"){
        cout << "pulga" << endl;
            }
        else{
        cout << "lagarta" << endl;
            }
        }
        }

    if (tipo1 == "invertebrado"){
    if (tipo2 == "anelideo"){
    if (tipo3 == "hematofago"){
        cout << "sanguessuga" << endl;
            }
            else{
            cout << "minhoca" << endl;
                }
        }
        }

    return 0;
}
