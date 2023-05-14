#include <iostream>

using namespace std;

int main()
{
    int saisi;
    int factoriel=1;
    cout<<"SAISI UN NOMBRE"<<endl;
    cin>>saisi;
    for(int i=1;i<=saisi;i++){
        factoriel=factoriel*i;
    }
    cout<<factoriel;
}
