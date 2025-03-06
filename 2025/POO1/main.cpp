#include <iostream>

using namespace std;

class Personne
{
    public:
        // Accessible partout
        string nom;
        int age;
        Personne (){
            nom = "A";
            age = 100;
        }
        void setCompte(float montant){
            compteBancaire = montant;
        }
        float getCompte(){
            return compteBancaire;
        }
    private:
        // Ne pas accessibles à l'exterieur
        string groupeSanguin;
    protected:
        //accessible dans les classes filles
        float compteBancaire;
};

class Etudiant: public Personne{
public:
    string matricule;
    void setCote(float c){
        cote=c;
    }
    float getCote(){
        return cote;
    }
    void signerPresence(){
        cout<<"L'etudiant scanne la carte"<<endl;
    }
private:
    float cote;
};

class Enseignant: public Personne{
public:
    void signerPresence(){
        cout<<"L'enseignant utilise l'empreinte digitale"<<endl;
    }

};

int main()
{
    Personne steve;
    Etudiant david;
    Enseignant espoir;

    steve.nom = "STEVE";
    steve.setCompte(1200);
    david.matricule = "25IGGJ007672";
    david.setCote(10.5);
    david.signerPresence();
    espoir.signerPresence();
}
