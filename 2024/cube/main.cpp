#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    float cote;
    float surface;
    cout << "saisi le cote" << endl;
   cin>>cote;
   surface=pow(cote,2);
   cout<<"Surface ="<<surface<<endl;
   cout<<"Surface au cube = "<<pow(surface,3);
}
