// ============================================================
// Application 5 - Nombre positif ou négatif (if / else)
// Equivalent C++ du script Python de l'Application 5
// ============================================================
// Python d'origine :
//   print("Entrer un nombre compris entre -100 et 100 :")
//   n = int(input())
//   if n > 0 :
//       print("Le nombre est positif")
//   else :
//       print("Le nombre est negatif")
// ============================================================
// Explication du programme :
//   L'utilisateur saisit un nombre entre -100 et 100.
//   Si n > 0 : affiche "Le nombre est positif"
//   Sinon    : affiche "Le nombre est negatif"
// ============================================================
// Tests à réaliser :
//   avec n = -89  -> "Le nombre est negatif"
//   avec n =  70  -> "Le nombre est positif"
// ============================================================

#include <iostream>
using namespace std;

int main() {
    cout << "Entrer un nombre compris entre -100 et 100 : ";
    int n;
    cin >> n;

    if (n > 0) {
        cout << "Le nombre est positif" << endl;
    } else {
        cout << "Le nombre est negatif" << endl;
    }

    return 0;
}
