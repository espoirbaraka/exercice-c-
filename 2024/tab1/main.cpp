#include <iostream>

using namespace std;

int main()
{
    int taille;
    cout<<"saisi la taille du tableau"<<endl;
    cin>>taille;
    int tab[taille];
    int i=0;
    while(i<taille){
        int entier;
        cout<<"saisi un entier"<<endl;
        cin>>entier;
        tab[i]=entier;
        i++;
    }

    for(int j=0; j<taille; j++){
        cout<<tab[j]<<endl;
    }
}
