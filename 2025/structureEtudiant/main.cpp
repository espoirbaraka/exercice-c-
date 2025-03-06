#include <iostream>

using namespace std;

struct etudiant{
    string nom;
    int age;
};

int main()
{
    etudiant mumbere;
    etudiant jean;
    mumbere.nom = "MUMBERE";
    mumbere.age = 15;
    jean.nom = "JOHN";
    jean.age =20;
    cout<<jean.nom<<endl;
    cout<<jean.age;
}
