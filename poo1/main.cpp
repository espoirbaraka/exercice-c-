#include <iostream>

using namespace std;
class personne{
public:
    string nom;
    string postnom;

    void manger(){
        cout<<"Oui je mange";
    }
    void courir(){
        cout<<"Oui je cours";
    }
    personne(){
        nom="AA";
        postnom="BB";
    }
    personne(string n, string p, string g){
        nom=n;
        postnom=p;
    }

    void setSalaire(double x){
        salaire = x;
    }
    double getSalaire(){
        return salaire;
    }
private:
double salaire;
protected:
    string sante;
};

class etudiant:public personne{
public:
    string ecole;
    double cote;
    void deliber(){
        cout<<"Deliberation";
    }
    void calcul(){
        int pourcentage;
        cout<<"Saisi le pourcentage"<<endl;
        cin>>pourcentage;
        if(pourcentage>=50){
            cout<<"Vous avez reussi";
        }else{
            cout<<"Vous avez echoué";
        }
    }
};

int main()
{
    personne sam;
    personne espoir("ESPOIR","BARAKA","AAAA");
    etudiant pascal;
    pascal.nom ="PASCAL";
    pascal.postnom="PASCAL";
    //pascal.setSalaire(129);
    sam.nom="SAM";
    sam.postnom="ROGER";
    sam.setSalaire(120);
    cout<<"L'AFFICHE PASCAL"<<endl;
    cout<<"================"<<endl;
    cout<<pascal.nom<<endl;
    cout<<pascal.postnom<<endl;
    //cout<<pascal.getSalaire<<endl;
    cout<<"L'AFFICHE ESPOIR"<<endl;
    cout<<"================"<<endl;
    cout<<espoir.nom<<endl;
    cout<<espoir.postnom<<endl;
    cout<<"L'AFFICHE SAM"<<endl;
    cout<<"============="<<endl;
    cout<<sam.nom<<endl;
    cout<<sam.postnom<<endl;
    cout<<sam.getSalaire();
    pascal.calcul();
}

