#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Saisi un nombre"<<endl;
    cin>>n;

    double harmonique=0.0;
    for(int i=1; i<=n; i++){
        harmonique=harmonique+(1.0/i);
    }
    cout<<harmonique;

}
