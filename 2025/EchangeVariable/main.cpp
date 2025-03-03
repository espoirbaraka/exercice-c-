#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "SAISI LA VALEUR DE A :" << endl;
    cin>>a;
    cout<<"SAISI LA VALEUR DE B:" << endl;
    cin>>b;
    c = a;
    a = b;
    b = c;
    cout<<"La valeur de a = "<<a<<" et la valeur de b = "<<b;
    return 0;
}
