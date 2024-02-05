#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout<<"Saisi a"<<endl;
    cin>>a;
    cout<<"Saisi b"<<endl;
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"La valeur de a = "<<a<<" et b = "<<b;
}
