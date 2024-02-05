#include <iostream>

using namespace std;

int main()
{
    float nbre1, nbre2;
    char signe;
    cout << "Saisi le premier nombre" << endl;
    cin>>nbre1;
    cout << "Saisi le deuxieme nombre" << endl;
    cin>>nbre2;
    cout << "Saisi le signe" << endl;
    cin>>signe;
    if(signe=='+'){
        cout<<nbre1<<" + "<<nbre2<<" = "<<nbre1+nbre2;
    }else if(signe=='-'){
        cout<<nbre1<<" - "<<nbre2<<" = "<<nbre1-nbre2;
    }else if(signe=='*'){
        cout<<nbre1<<" * "<<nbre2<<" = "<<nbre1*nbre2;
    }else if(signe=='/'){
        if(nbre2==0){
            cout<<"Division par 0 impossible";
        }else{
            cout<<nbre1<<" / "<<nbre2<<" = "<<nbre1/nbre2;
        }

    }
}
