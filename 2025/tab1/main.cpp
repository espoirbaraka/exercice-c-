#include <iostream>

using namespace std;

int main()
{
    int taille;
    cout << "Saisi la taille du tableau" << endl;
    cin>>taille;
    int tab[taille];
    for(int i=0; i<taille; i++){
        cout<<"Saisi un nombre"<<endl;
        cin>>tab[i];
    }
    for(int j=0; j<taille; j++){
        if(tab[j] % 2 == 0){
            cout<<tab[j]<<" : pair"<<endl;
        } else{
            cout<<tab[j]<<" : impair"<<endl;
        }

    }
    return 0;
}
