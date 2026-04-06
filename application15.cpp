// ============================================================
// Application 15 - Somme des entiers de 1 à n
// Equivalent C++ du script Python de l'Application 15
// ============================================================
// Problème :
//   L'utilisateur saisit un nombre entre 1 et 40.
//   Le programme calcule la somme 1 + 2 + 3 + ... + n.
//   Exemple : n=5 -> 1+2+3+4+5 = 15
// ============================================================
// Python d'origine (corrigé en rouge) :
//   a = int(input())
//   c = 0   # compteur
//   d = 0   # somme
//   if a < 0 or a > 40:
//       print("Le nombre saisi n'est pas bon")
//   else:
//       while c < a:
//           c = c + 1
//           d = d + c
//       print(d)
// ============================================================
// Travail facultatif : afficher la décomposition
//   ex : 1+2+3+4+5= 15
// ============================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Entrer un nombre compris entre 1 et 40 : ";
    int a;
    cin >> a;

    int c = 0;   // compteur (remplace la variable de boucle)
    int d = 0;   // accumulateur de la somme

    // Python : if a < 0 or a > 40 -> C++ : if (a < 0 || a > 40)
    if (a < 0 || a > 40) {
        cout << "Le nombre saisi n'est pas bon" << endl;
    } else {
        while (c < a) {
            c = c + 1;
            d = d + c;
        }
        cout << d << endl;
    }

    // ---- Travail facultatif : afficher la décomposition ----
    // Exemple : 1+2+3+4+5= 15
    if (a >= 1 && a <= 40) {
        cout << endl << "Decomposition : ";
        int somme = 0;
        for (int k = 1; k <= a; k++) {
            somme += k;
            if (k < a) cout << k << "+";
            else        cout << k;
        }
        cout << "= " << somme << endl;
    }

    return 0;
}
