// ============================================================
// Application 8 - Remise selon logigramme (seuils 8000/12000)
// Equivalent C++ du programme Python de l'Application 8
// ============================================================
// Logigramme :
//   M < 8 000 €              -> taux 2%
//   8 000 € <= M < 12 000 €  -> taux 4%
//   M >= 12 000 €            -> taux 6%
//
// (L'utilisation de else if est possible mais non obligatoire
//  en Python ; en C++ c'est la forme naturelle.)
// ============================================================
// Simulations à réaliser :
//   Montant commande : 15 000 € -> taux 6% -> remise 900 €
//   Montant commande : 10 000 € -> taux 4% -> remise 400 €
//   Montant commande :  5 000 € -> taux 2% -> remise 100 €
// ============================================================

#include <iostream>
using namespace std;

int main() {
    cout << "Montant de la commande ? ";
    double M;
    cin >> M;

    double R;

    if (M < 8000) {
        R = M * 2 / 100;
        cout << "Taux de remise 2%" << endl;
    } else if (M < 12000) {
        R = M * 4 / 100;
        cout << "Taux de remise 4%" << endl;
    } else {
        R = M * 6 / 100;
        cout << "Taux de remise 6%" << endl;
    }

    cout << "Remise " << R << " euros" << endl;

    return 0;
}
