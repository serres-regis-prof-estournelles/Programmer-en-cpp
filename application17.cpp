// ============================================================
// Application 17 - Résultats des scripts avec fonctions
// Equivalent C++ des 4 scripts Python de l'Application 17
// ============================================================
// Travail sur table : deviner le résultat AVANT d'exécuter.
// ============================================================

#include <iostream>
using namespace std;

// ============================================================
// Script 1 : fonction f(x) = x²-4x+9, affichage pour x de -3 à 3
// Python :
//   def f(x): return x**2 - 4*x + 9
//   x = -3
//   while x <= 3:
//       print("f(", x, ")=", f(x))
//       x = x + 1
// ============================================================
// Résultat :
//   f(-3)= 30   f(-2)= 21   f(-1)= 14   f(0)= 9
//   f(1) = 6    f(2) = 5    f(3) = 6
// ============================================================

int f(int x) {
    return x * x - 4 * x + 9;   // x**2 - 4*x + 9
}

// ============================================================
// Script 2 : deux fonctions compteur (de 0 à 3, de 5 à 0)
// Python : def compteur3() / def compteur5()
// ============================================================
// Résultat :
//   De 0 a 3 : 0 1 2 3
//   De 5 a 0 : 5 4 3 2 1 0
//   Go !
// ============================================================

void compteur3() {
    int i = 0;
    while (i <= 3) {
        cout << i << endl;
        i = i + 1;
    }
}

void compteur5() {
    int i = 5;
    while (i >= 0) {
        cout << i << endl;
        i = i - 1;
    }
}

// ============================================================
// Script 3 : fonction code() — séquence avec conditions
// Python :
//   def code():
//     i = 20
//     while i >= 10:
//       if i/2==i//2 and i!=14 and not i==10:
//           print(i, end="")
//       else:
//           print("A", end="")
//       i = i - 1
//   code()
// ============================================================
// Traduction :
//   i/2 == i//2 signifie que i est pair
//   (en Python, int//int = division entière, int/int = réelle)
//   En C++ : i%2 == 0 pour tester la parité
//   not i==10 -> !(i==10) -> i!=10
// ============================================================
// Résultat : 20A18A16AAA12AA
// ============================================================

void code() {
    int i = 20;
    while (i >= 10) {
        // Python : i/2 == i//2 signifie i est pair (pas de reste)
        // C++    : i % 2 == 0
        if (i % 2 == 0 && i != 14 && i != 10) {
            cout << i;
        } else {
            cout << "A";
        }
        i = i - 1;
    }
    cout << endl;
}

// ============================================================
// Script 4 : fonction calculremise() avec variable globale M
// Python :
//   def calculremise():
//     if M < 8000:   T=2
//     elif M<12000:  T=4
//     else:          T=6
//     print("Taux de remise :", T, "%")
//     R = M * T / 100
//     print("Montant de la remise :", R, "euros")
//   M = float(input())
//   calculremise()
// ============================================================
// En C++, on préfère passer M en paramètre plutôt qu'utiliser
// une variable globale (meilleure pratique).
// ============================================================
// Résultat pour M = 10 000 :
//   Taux de remise : 4 %
//   Montant de la remise : 400 euros
// ============================================================

void calculremise(double M) {
    double T;
    if (M < 8000)       T = 2;
    else if (M < 12000) T = 4;
    else                T = 6;

    cout << "Taux de remise : " << T << " %" << endl;
    double R = M * T / 100;
    cout << "Montant de la remise : " << R << " euros" << endl;
}

// ============================================================
// Programme principal : exécute les 4 scripts
// ============================================================

int main() {

    // --- Script 1 ---
    cout << "=== Script 1 ===" << endl;
    int x = -3;
    while (x <= 3) {
        cout << "f(" << x << ")= " << f(x) << endl;
        x = x + 1;
    }

    // --- Script 2 ---
    cout << endl << "=== Script 2 ===" << endl;
    cout << "De 0 a 3" << endl;
    compteur3();
    cout << "De 5 a 0" << endl;
    compteur5();
    cout << "Go !" << endl;

    // --- Script 3 ---
    cout << endl << "=== Script 3 ===" << endl;
    code();

    // --- Script 4 ---
    cout << endl << "=== Script 4 ===" << endl;
    cout << "Montant de la commande : ";
    double M;
    cin >> M;
    calculremise(M);

    return 0;
}
