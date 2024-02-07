#ifndef ARME_H
#define ARME_H
#include <iostream>

using namespace std;

class Arme{
public:

    //constructeur et destructeur
    Arme(){
        this->num=12;
    };
    Arme(int num, string nom, string marque, string couleur){
        this->num=num;
        this->nom=nom;
        this->marque=marque;
        this->couleur=couleur;
    }
    ~Arme(){};
    //Methodes
    void saisie(){
        cout<<"La saisie";
    }
    void afficher(){
        cout<<"L'affichage";
    }
    //Incapsulation
    int getNum(){
        return num;
    }
    void setNum(int n1){
        this->num=n1;
    }
    string getNom(){
        return nom;
    }
    void setNom(string n2){
       this->nom=n2;
    }
    string getMarque(){
        return marque;
    }
    void setMarque(string m){
        this->marque=m;
    }
    string getCouleur(){
        return couleur;
    }
    void setCouleur(string c){
        this->couleur=c;
    }
    float getPoids(){
        return this->poids;
    }
    void setPoids(float p){
        this->poids=p;
    }
private:
    float poids;
protected:
    int num;
    string nom;
    string marque;
    string couleur;

};

int main()
{
    Arme ak47;
    ak47.setPoids(56.7);
    ak47.setNum(234);
    cout<<ak47.getNum()<<endl;
    cout<<ak47.getPoids();
}








#endif // ARME_FEU_H
