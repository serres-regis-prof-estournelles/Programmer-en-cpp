// ============================================================
// Application 16 - Fonctions : carré et cube
// Equivalent C++ du script Python de l'Application 16
// ============================================================
// Python d'origine :
//   def cube(x):
//       return (x * x * x)
//
//   def carre(x):
//       return (x * x)
//
//   a = int(input())
//   b = carre(a)
//   c = cube(a)
//   print("Le carré de", a, "est", b)
//   print("Le cube de",  a, "est", c)
// ============================================================
// Questions :
//   1) Première ligne du programme principal :
//      cout << "Entrer un nombre entier : ";
//
//   2) Les 2 fonctions créées : carre et cube
//
//   3) Pourquoi ça ne fonctionne pas avec 2.99 ?
//      En C++, a est de type int : la partie décimale est
//      tronquée à la saisie. Pour accepter un décimal,
//      il faudrait déclarer a en double et adapter
//      les fonctions (retourner double).
// ============================================================

#include <iostream>
using namespace std;

// ----- Définition des fonctions AVANT le main() -----
// Python : def cube(x):  return (x * x * x)
// C++    : int cube(int x) { return x * x * x; }

int cube(int x) {
    return x * x * x;
}

int carre(int x) {
    return x * x;
}

// ----- Programme principal -----
int main() {
    cout << "Entrer un nombre entier : ";   // 1ère ligne du programme principal
    int a;
    cin >> a;

    int b = carre(a);
    int c = cube(a);

    cout << "Le carre de " << a << " est " << b << endl;
    cout << "Le cube de "  << a << " est " << c << endl;

    return 0;
}
