#include <iostream>

using namespace std;

int main()
{
    struct{
        int age;
        string nom;
    }lui;
    lui.age=1;
    lui.nom="SAM";
    cout<<lui.age<<endl;
    cout<<lui.nom<<endl;
}
