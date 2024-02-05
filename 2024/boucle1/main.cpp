#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int nbre;
    do{
        cout << "saisi un nombre" << endl;
        cin>>nbre;
        cout<<" Racine carre de "<< nbre<<" = "<<sqrt(nbre)<<endl;
    }while(nbre != 0);
    cout<<"Racine carre de zero impossible";
}
