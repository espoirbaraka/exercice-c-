#include <iostream>

using namespace std;

int main()
{
    char rep;
    int nbre;
    do{
        cout<<"saisi un nombre"<<endl;
        cin>>nbre;
        cout<<"voulez-vous continuer?"<<endl;
        cin>>rep;
        cout<<"je suis en train de coder"<<endl;
    }while((rep=='O' || rep=='o') && (nbre>=10&&nbre<=60));
}
