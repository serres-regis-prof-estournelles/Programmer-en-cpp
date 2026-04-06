// ============================================================
// Application 11 - Boucle for : jours de janvier
// Equivalent C++ du script Python de l'Application 11
// ============================================================
// Python d'origine :
//   for jour in range(1, 32):
//       print(jour, end="")
//       print(" janvier")
// ============================================================
// Questions :
//   1) Première ligne affichée : "1 janvier"
//   2) Dernière ligne affichée : "31 janvier"
// ============================================================
// Résultat attendu :
//   1 janvier
//   2 janvier
//   ...
//   31 janvier
// ============================================================

#include <iostream>
using namespace std;

int main() {
    // Python : for jour in range(1, 32)
    // C++    : for (int jour = 1; jour <= 31; jour++)
    for (int jour = 1; jour <= 31; jour++) {
        // Python : print(jour, end="") puis print(" janvier")
        // C++    : cout sans endl puis avec endl
        cout << jour << " janvier" << endl;
    }

    return 0;
}
