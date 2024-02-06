#include <iostream>

using namespace std;

int main()
{
    int tab[10];
    int entier;
    bool continuer = true;
    int i = 0;
    while (i < 10 && continuer == true)
    {
        cout << "saisi un entier (ou -1 pour arrêter) : " << endl;
        cin >> entier;
        if (entier >= 0 && entier <= 20)
        {
            tab[i] = entier;
            continuer = true; // Correction : utiliser l'opérateur d'affectation '=' au lieu de '=='
        }
        else if (entier == -1)
        {
            continuer = false; // Correction : utiliser l'opérateur d'affectation '=' au lieu de '=='
        }
        i++;
    }
    cout << "LES ELEMENTS DU TABLEAU" << endl;
    int j = 0;
    while (j < i) // Correction : Utiliser 'i' comme limite pour parcourir les éléments saisis
    {
        cout << tab[j] << endl;
        j++;
    }
    return 0; // Ajout : retourner 0 pour indiquer une exécution réussie
}
