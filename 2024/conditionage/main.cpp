#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Saisi votre age"<<endl;
    cin>>age;
    if(age>=0 && age<5){
        cout<<"vous etes un bebe";
    }else if(age>=5 && age<=11){
        cout<<"vous etes un enfant";
    }else if(age>=12 && age<=17){
        cout<<"vous etes un adolescent";
    }else if(age>=18 && age<=100){
        cout<<"vous etes un adulte";
    }else{
        cout<<"saisi invalide";
    }

}
