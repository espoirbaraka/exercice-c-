#include <iostream>

using namespace std;

int main()
{
    int v;
    cout<<"Saisi la valeur"<<endl;
    cin>>v;
    for(int i=0; i>=v; i--){
        for(int j=0; j>=v; j--){
            cout<<i<<" * "<<j<<" = "<<i*j<<endl;
        }
    }
}
