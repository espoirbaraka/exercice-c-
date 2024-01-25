#include <iostream>

using namespace std;

int main()
{
    int nbre;
    cout<<"Saisi un nombre"<<endl;
    cin>>nbre;
    int p=0;
    do{
        double pourcentage;
        cout<<"Saisi le pourcentage"<<endl;
        cin>>pourcentage;
        if(pourcentage<50 && pourcentage>0){
            cout<<"Ajourne"<<endl;
        }else if(pourcentage>=50){
            cout<<"Vous avez reussi"<<endl;
        }
        p++;
    }while(p<nbre);


}
