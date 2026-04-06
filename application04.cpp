// ============================================================
// Application 4 - Résultats des scripts (opérations)
// Equivalent C++ des 10 scripts Python de l'Application 4
// ============================================================
// Travail sur table : deviner le résultat AVANT d'exécuter.
// ============================================================

#include <iostream>
#include <string>
#include <algorithm>   // pour max() et min() avec initializer_list
using namespace std;

int main() {

    // --- Script 1 : division réelle ---
    // Python : a=11 / b=5 / c=a/b -> 2.2  (division réelle par défaut)
    // C++    : attention, int/int = int ! Il faut caster en double.
    cout << "=== Script 1 ===" << endl;
    int a1 = 11, b1 = 5;
    double c1 = (double)a1 / b1;   // cast nécessaire pour obtenir 2.2
    cout << c1 << endl;             // Résultat : 2.2

    // --- Script 2 : division entière ---
    // Python : a//b -> 2  (division entière explicite avec //)
    // C++    : int/int donne déjà la division entière
    cout << "=== Script 2 ===" << endl;
    int a2 = 11, b2 = 5;
    int c2 = a2 / b2;
    cout << c2 << endl;   // Résultat : 2

    // --- Script 3 : modulo ---
    // Python : a%b -> reste de la division euclidienne
    // C++    : même opérateur %
    cout << "=== Script 3 ===" << endl;
    int a3 = 11, b3 = 5;
    int c3 = a3 % b3;
    cout << c3 << endl;   // Résultat : 1

    // --- Script 4 : modulo ---
    cout << "=== Script 4 ===" << endl;
    int a4 = 12, b4 = 5;
    int c4 = a4 % b4;
    cout << c4 << endl;   // Résultat : 2

    // --- Script 5 : longueur d'une chaîne ---
    // Python : len(a) -> C++ : a.length() ou a.size()
    cout << "=== Script 5 ===" << endl;
    string a5 = "anticonstitutionnellement";
    int b5 = a5.length();
    cout << b5 << endl;   // Résultat : 25

    // --- Script 6 : accès à un caractère par indice ---
    // Python : a[4] -> C++ : a[4]  (même syntaxe, indices depuis 0)
    cout << "=== Script 6 ===" << endl;
    string a6 = "anticonstitutionnellement";
    char b6 = a6[4];
    cout << b6 << endl;   // Résultat : c  (a=0,n=1,t=2,i=3,c=4)

    // --- Script 7 : concaténation de chaînes ---
    // Python : a+b -> C++ : a+b  (même opérateur pour string)
    cout << "=== Script 7 ===" << endl;
    string a7 = "Bene";
    string b7 = "nuts";
    string c7 = a7 + b7;
    cout << c7 << endl;   // Résultat : Benenuts

    // --- Script 8 : max et min sur plusieurs variables ---
    // Python : max(a,b,c,d,e,f) -> C++ : max avec initializer_list
    cout << "=== Script 8 ===" << endl;
    int a8=14, b8=18, c8=22, d8=44, e8=23, f8=16;
    int g8 = max({a8, b8, c8, d8, e8, f8});
    int h8 = min({a8, b8, c8, d8, e8, f8});
    cout << g8 << endl;   // Résultat : 44
    cout << h8 << endl;   // Résultat : 14

    // --- Script 9 : combinaison d'opérations ---
    // Python : a**2 -> C++ : a*a  (ou pow(a,2) avec #include <cmath>)
    cout << "=== Script 9 ===" << endl;
    int a9 = 5;
    int b9 = a9 * 2;
    int c9 = a9 * a9;               // a**2
    int d9 = max({a9, b9, c9});
    int e9 = min({a9, b9, c9});
    int f9 = e9 - d9;
    cout << b9 << endl;   // Résultat : 10
    cout << c9 << endl;   // Résultat : 25
    cout << d9 << endl;   // Résultat : 25
    cout << e9 << endl;   // Résultat : 5
    cout << f9 << endl;   // Résultat : -20

    // --- Script 10 : somme de plusieurs variables ---
    // Python : (a,b)=(12,14) / [c,d]=[18,20] / e,f=11,14
    // C++    : déclarations séparées typées
    cout << "=== Script 10 ===" << endl;
    int a10=12, b10=14, c10=18, d10=20, e10=11, f10=14, g10=14, h10=8;
    int i10 = a10 + b10 + c10 + d10 + e10 + f10 + g10 + h10;
    cout << i10 << endl;   // Résultat : 111

    return 0;
}
