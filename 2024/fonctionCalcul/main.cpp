#include <iostream>

using namespace std;

void calculatrice(float nbre1, float nbre2, char signe){
    if(signe=='+'){
        cout<<nbre1+nbre2;
    }else if(signe=='-'){
        cout<<nbre1-nbre2;
    }else if(signe=='*'){
        cout<<nbre1*nbre2;
    }else if(signe=='/'){
        if(nbre2!=0){
            cout<<nbre1/nbre2;
        }else{
            cout<<"division par zero impossible";
        }

    }else{
        cout<<nbre1+nbre2;
    }
}

int main()
{
    calculatrice(12, 7, 'a');
}
