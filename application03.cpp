// ============================================================
// Application 3 - Différentes formes d'affectation
// Equivalent C++ des 4 programmes Python de l'Application 3
// ============================================================
// Les 4 programmes Python donnent le même résultat : 6
//
// Programme 1 Python :   a=3 / b=2 / c=a*b / print(c)
// Programme 2 Python :   a,b=3,2 / c=a*b / print(c)
// Programme 3 Python :   (a,b)=(3,2) / c=a*b / print(c)
// Programme 4 Python :   [a,b]=[3,2] / c=a*b / print(c)
//
// En C++, les déclarations sont toujours explicitement typées.
// On montre 4 façons équivalentes d'initialiser a et b.
// ============================================================
// Résultat attendu (tous les 4 programmes) :
//   6
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // --- Programme 1 : déclarations séparées ---
    cout << "=== Programme 1 ===" << endl;
    int a1 = 3;
    int b1 = 2;
    int c1 = a1 * b1;
    cout << c1 << endl;

    // --- Programme 2 : déclarations sur une même ligne ---
    cout << "=== Programme 2 ===" << endl;
    int a2 = 3, b2 = 2;
    int c2 = a2 * b2;
    cout << c2 << endl;

    // --- Programme 3 : initialisation puis utilisation ---
    cout << "=== Programme 3 ===" << endl;
    int a3, b3;
    a3 = 3;
    b3 = 2;
    int c3 = a3 * b3;
    cout << c3 << endl;

    // --- Programme 4 : via des constantes nommées ---
    cout << "=== Programme 4 ===" << endl;
    const int INIT_A = 3, INIT_B = 2;
    int a4 = INIT_A, b4 = INIT_B;
    int c4 = a4 * b4;
    cout << c4 << endl;

    // --- Remarque : les commentaires en C++ s'écrivent avec // ---
    int a = 3;   // valeur de a
    int b = 2;
    int c = a * b;
    // Affichage de la valeur de c
    cout << c << endl;

    return 0;
}
