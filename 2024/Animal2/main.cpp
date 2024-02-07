#include <iostream>
#include<Animal.h>
using namespace std;

class Vache:public Animal{
};

int main()
{
    Vache v1;
    v1.nom="LA VACHE";
    cout<<v1.nom;
}
