#include <iostream>

using namespace std;

class Animal{
public:
    string nom;
    string getCouleur(){
        return couleur;
    }
    void setCouleur(string c){
        this->couleur=c;
    }
    void manger(){
        cout<<"L'animal mange";
    }
    void marcher(){
        cout<<"L'animal se deplacer";
    }
    void crier(){
        cout<<"L'animal fait un cri";
    }
private:
    string couleur;
protected:

};

class Vache: public Animal{
public:
    int nbrePattes;
    Vache(){
        nbrePattes=4;
    }
    void allaiter(){
        cout<<"La vache allaite";
    }
    void ruminer(){
        cout<<"La vache rumine";
    }
private:
protected:

};

class Chevre:public Animal{
public:
    int nbrePattes;
private:
protected:
};

class Pigeon: public Animal{
public:
    float poids;
    void marcher(){
        cout<<"Le pigeon vole";
    }
private:
protected:
};



int main()
{
    Vache v1;
    Chevre c1;
    Pigeon p1;
    v1.marcher();
    p1.marcher();


}
