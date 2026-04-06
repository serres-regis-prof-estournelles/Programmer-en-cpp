// ============================================================
// Application 12 - Boucle while : nombres pairs de 0 à 100
// Equivalent C++ du script Python de l'Application 12
// ============================================================
// Python d'origine :
//   c = 0
//   while c <= 100:
//       print(c)
//       c = c + 2
// ============================================================
// Explication :
//   Le programme affiche les nombres pairs de 0 à 100.
//   c est initialisé à 0. Tant que c <= 100, on affiche c
//   puis on l'incrémente de 2.
// ============================================================
// Résultat attendu :
//   0
//   2
//   4
//   ...
//   100
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int c = 0;

    // Python : while c <= 100:
    // C++    : while (c <= 100) { ... }
    while (c <= 100) {
        cout << c << endl;
        c = c + 2;   // ou : c += 2;
    }

    return 0;
}
