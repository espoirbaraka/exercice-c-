#include <iostream>

using namespace std;

int main()
{
    int nombreFois;
    cout << "saisir le nombre de fois" << endl;
    cin>>nombreFois;
    //boucle for
    /*for(int i=0;i<nombreFois;i=i+1){
        cout<<"ISIG/GOMA"<<endl;
    }*/

    //boucle do while
    /*
    int i=0;
    do{
        cout<<"ISIG/GOMA"<<endl;
        i++;
    }while(i<nombreFois);
    */

    int i=0;
    while(i<nombreFois){
        cout<<"ISIG/GOMA"<<endl;
        i++;
    }
}
