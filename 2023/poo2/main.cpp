#include <iostream>

using namespace std;
class animal{
public:
    string couleur;
    double taille;
    void crier(){
        cout<<"Je fais un cri";
    }
};
class chien:public animal{
public:
    string nom;
    void crier(){
        cout<<"Le chien aboie";
    }
};
int main()
{
    animal a1;
    chien c1;
    a1.crier();
    c1.crier();
}
