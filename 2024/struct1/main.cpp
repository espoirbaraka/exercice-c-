#include <iostream>

using namespace std;

int main()
{
    struct identite{
        string nom;
        int age;
        string tel;
        char sexe;
    };

    identite espoir;
    espoir.nom="ESPOIR";
    espoir.age=12;
    espoir.tel="+24378765778";
    espoir.sexe='M';

    identite fidele;
    fidele.nom="FIDELE";

    cout<<"J'AFFICHE ESPOIR"<<endl;
    cout<<"================"<<endl;
    cout<<"Nom = "<<espoir.nom<<endl;
    cout<<"Age = "<<espoir.age<<endl;

    cout<<"J'AFFICHE FIDELE"<<endl;
    cout<<"================"<<endl;
    cout<<"Nom = "<<fidele.nom<<endl;
}
