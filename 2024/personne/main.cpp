#include <iostream>

using namespace std;

class Personne
{
public:
    string nom;
    string postnom;
    string prenom;
    Personne(){
        nom="JOSEPH";
        postnom="MARC";
        prenom="LUC";
    }
    Personne(string nom, string p){
        this->nom=nom;
        postnom=p;
    }
    void manger()
    {
        cout<<"une personne peut manger";
    }
    void setAdresse(string a){
        adresse=a;
    }
    string getAdresse(){
        return adresse;
    }
    void setAge(int a){
        age= a;
    }
    int getAge(){
        return age;
    }
private:
    string adresse;
protected:
    int age;
};

int main()
{
    Personne jean;
    Personne fidele("FIDELE","HAMULI");

    cout<<fidele.postnom;
}
