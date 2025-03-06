#include <iostream>

using namespace std;

int main()
{
    int nbre;
    do{
       cout<<"Saisi un nombre"<<endl;
        cin>>nbre;
        if(nbre >=27 && nbre <=53){
            cout<<"Je suis en train de programmer"<<endl;
            continue;
        } else {
            for(int i=0; i<10; i++){
                cout<<"Je dois quitter"<<endl;
            }
            break;
        }
    }while(true);
}
