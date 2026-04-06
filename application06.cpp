// ============================================================
// Application 6 - Calcul de remise selon montant (2 tranches)
// Equivalent C++ du script Python de l'Application 6
// ============================================================
// Python d'origine :
//   M = float(input())
//   if M < 10000:
//       R = M*3/100
//       print("Taux de remise 3%")
//   else:
//       R = M*5/100
//       print("Taux de remise 5%")
//   print("Remise", R, "euros")
// ============================================================
// Simulations à réaliser :
//   M = 18 000 € -> remise 5% -> 900 €
//   M =  1 800 € -> remise 3% ->  54 €
// ============================================================

#include <iostream>
using namespace std;

int main() {
    cout << "Montant de la commande ? ";
    double M;
    cin >> M;

    double R;

    if (M < 10000) {
        R = M * 3 / 100;
        cout << "Taux de remise 3%" << endl;
    } else {
        R = M * 5 / 100;
        cout << "Taux de remise 5%" << endl;
    }

    cout << "Remise " << R << " euros" << endl;

    return 0;
}
