#include <iostream>

using namespace std;

float calculatrice(float nbre1, float nbre2, char signe){
    if(signe == '+'){
        return nbre1+nbre2;
    } else if (signe == '-'){
        return nbre1-nbre2;
    } else if (signe == '*'){
        return nbre1*nbre2;
    } else if (signe == '/'){
        if(nbre2 == 0){
            return 0;
        } else {
            return nbre1/nbre2;
        }

    } else {
        return nbre1+nbre2;
    }
}

int main()
{
    cout<<calculatrice(12, 2, '+');
}
