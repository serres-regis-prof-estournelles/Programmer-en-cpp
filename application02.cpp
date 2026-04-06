// ============================================================
// Application 2 - Calcul du carré d'un nombre
// Equivalent C++ du script Python de l'Application 2
// ============================================================
// Python d'origine :
//   print("Entrer un nombre entier : ", end="")
//   n = int(input())
//   c = n**2
//   print("Le carré de", n, "est", c)
// ============================================================
// Résultat attendu (exemple avec n=5) :
//   Entrer un nombre entier : 5
//   Le carre de 5 est 25
// ============================================================

#include <iostream>
using namespace std;

int main() {
    cout << "Entrer un nombre entier : ";   // end="" en Python = pas de retour ligne
    int n;
    cin >> n;

    int c = n * n;   // n**2 en Python = n*n en C++ (ou pow(n,2))

    cout << "Le carre de " << n << " est " << c << endl;

    return 0;
}
