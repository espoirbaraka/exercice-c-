#include <iostream>

using namespace std;

int main()
{
    int n;
    double harmonique=0.0;
    cout << "saisi n" << endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        harmonique=harmonique+(1.0/i);
    }
    cout<<"La serie harmonique de "<<n<<" = "<<harmonique;
}
