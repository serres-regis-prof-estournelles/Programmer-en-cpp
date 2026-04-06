// ============================================================
// Application 10 - Boucle for : carrés de 1 à 10
// Equivalent C++ du script Python de l'Application 10
// ============================================================
// Python d'origine :
//   for c in range(1, 11):
//       n = c**2
//       print("Le carré de", c, "est", n)
// ============================================================
// Explication :
//   On affiche la valeur de c et son carré.
//   c commence à 1 et est incrémenté de 1.
//   Tant que c <= 10, on répète l'opération. C'est une boucle.
// ============================================================
// Résultat attendu :
//   Le carre de 1 est 1
//   Le carre de 2 est 4
//   ...
//   Le carre de 10 est 100
// ============================================================

#include <iostream>
using namespace std;

int main() {
    // Python : for c in range(1, 11)
    // C++    : for (int c = 1; c <= 10; c++)
    for (int c = 1; c <= 10; c++) {
        int n = c * c;   // c**2 en Python
        cout << "Le carre de " << c << " est " << n << endl;
    }

    return 0;
}
