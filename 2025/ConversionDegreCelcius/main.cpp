#include <iostream>

using namespace std;

int main()
{
    float celcius;
    float farhenet = (celcius * 1.8) + 32;
    cout << "Saisi le degre celcius!" << endl;
    cin >>celcius;
    cout << celcius <<" degre celcius = "<< farhenet<<" degre farhenet";
    return 0;
}
