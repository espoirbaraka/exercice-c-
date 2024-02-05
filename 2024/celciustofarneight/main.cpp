#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float lo, la;
    cout<<"Saisi la longueur"<<endl;
    cin>>lo;
    cout<<"Saisi la largeur"<<endl;
    cin>>la;
    cout<<"Hypothenuse = "<<sqrt((lo*lo)+(la*la))<<endl;
    cout<<"Hypothenuse = "<<sqrt(pow(lo,2)+pow(la,2));
}
