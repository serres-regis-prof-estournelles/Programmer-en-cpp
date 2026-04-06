// ============================================================
// Application 7 - Calcul de remise selon montant (3 tranches)
// Equivalent C++ du script Python de l'Application 7
// ============================================================
// Python d'origine :
//   M = float(input())
//   if M < 10000:
//       R = M*3/100
//       print("Taux de remise 3%")
//   else:
//       if M < 20000:
//           R = M*5/100
//           print("Taux de remise 5%")
//       else:
//           R = M*7/100
//           print("Taux de remise 7%")
//   print("Remise", R, "euros")
// ============================================================
// Explication :
//   M < 10 000 €               -> remise 3%
//   10 000 € <= M < 20 000 €   -> remise 5%
//   M >= 20 000 €              -> remise 7%
// ============================================================
// Travail sur table uniquement - ne pas exécuter ce programme
// avant d'avoir donné l'explication écrite.
// ============================================================

#include <iostream>
using namespace std;

int main() {
    cout << "Montant de la commande ? ";
    double M;
    cin >> M;

    double R;

    // Equivalent du if/else imbriqué Python,
    // réécrit avec else if pour plus de clarté en C++
    if (M < 10000) {
        R = M * 3 / 100;
        cout << "Taux de remise 3%" << endl;
    } else if (M < 20000) {
        R = M * 5 / 100;
        cout << "Taux de remise 5%" << endl;
    } else {
        R = M * 7 / 100;
        cout << "Taux de remise 7%" << endl;
    }

    cout << "Remise " << R << " euros" << endl;

    return 0;
}
