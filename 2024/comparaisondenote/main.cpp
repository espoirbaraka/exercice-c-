#include <iostream>

using namespace std;

int main()
{
    float note1, note2, note3;
    cout << "saisi la premiere note" << endl;
    cin>>note1;
    cout << "saisi la deuxieme note" << endl;
    cin>>note2;
    cout << "saisi la troisieme note" << endl;
    cin>>note3;
    if(note1 > note2 && note1>note3){
        cout<<note1;
    }else if(note2 >note1 && note2>note3){
        cout<<note2;
    }else if(note3 >note1 && note3>note2){
        cout<<note3;
    }
}
