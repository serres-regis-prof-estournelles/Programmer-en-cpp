// ============================================================
// Application 1 - Variables et types de données
// Equivalent C++ du script Python de l'Application 1
// ============================================================
// Python d'origine :
//   a=8          -> int a = 8;
//   b=9.12       -> double b = 9.12;
//   c=a*b        -> double c = a * b;
//   d="thon"     -> string d = "thon";
//   e=True       -> bool e = true;
//   f=not(e)     -> bool f = !e;
//   g='Py'       -> string g = "Py";
//   h=g+d        -> string h = g + d;
//   i=8.         -> double i = 8.0;
//   print(...)   -> cout << ... << endl;
// ============================================================
// Résultat attendu :
//   8
//   9.12
//   72.96
//   thon
//   true
//   false
//   Py
//   Python
//   8
// ============================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    int    a = 8;
    double b = 9.12;
    double c = a * b;
    string d = "thon";
    bool   e = true;
    bool   f = !e;
    string g = "Py";
    string h = g + d;
    double i = 8.0;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << boolalpha << e << endl;   // boolalpha affiche "true"/"false"
    cout << boolalpha << f << endl;
    cout << g << endl;
    cout << h << endl;
    cout << i << endl;

    return 0;
}
