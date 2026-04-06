// ============================================================
// Application 9 - Résultats des scripts (conditions if/else)
// Equivalent C++ des 18 scripts Python de l'Application 9
// ============================================================
// Travail sur table : deviner le résultat AVANT d'exécuter.
// Les opérateurs Python  and/or/not  deviennent  &&/||/!  en C++
// La division entière Python //  devient  /  entre int en C++
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // --- Script 1 ---  Résultat : a=7, b=8
    {
        int a=7, b=12;
        if (a > 5)   b = b - 4;   // b=8
        if (b >= 10) b = b + 1;   // 8 < 10 donc non exécuté
        cout << "Script 1 : " << a << " " << b << endl;
    }

    // --- Script 2 ---  Résultat : a=7, b=12
    {
        int a=7, b=15;
        if (a > 5)   b = b - 4;   // b=11
        if (b >= 10) b = b + 1;   // b=12
        cout << "Script 2 : " << a << " " << b << endl;
    }

    // --- Script 3 ---  Résultat : a=7, b=16
    {
        int a=7, b=15;
        if (a == 5)  b = b - 4;   // faux, non exécuté
        if (b >= 10) b = b + 1;   // b=16
        cout << "Script 3 : " << a << " " << b << endl;
    }

    // --- Script 4 ---  Résultat : a=7, b=12
    {
        int a=7, b=15;
        if (a != 5)  b = b - 4;   // b=11
        if (b >= 10) b = b + 1;   // b=12
        cout << "Script 4 : " << a << " " << b << endl;
    }

    // --- Script 5 ---  Résultat : a=10, b=7
    {
        int a=7, b=15;
        if (a <= 5)        // faux
            b = b - 4;
        else {
            b = b - 8;     // b=7
            a = a + 3;     // a=10
        }
        cout << "Script 5 : " << a << " " << b << endl;
    }

    // --- Script 6 ---  Résultat : a=10, b=11
    // Python : a<=5 or b<=20  -> C++ : a<=5 || b<=20
    {
        int a=7, b=15;
        if (a <= 5 || b <= 20) {   // faux || vrai -> vrai
            b = b - 4;             // b=11
            a = a + 3;             // a=10
        } else {
            b = b - 8;
            a = a + 3;
        }
        cout << "Script 6 : " << a << " " << b << endl;
    }

    // --- Script 7 ---  Résultat : a=10, b=7
    // Python : a<=5 and b<=20  -> C++ : a<=5 && b<=20
    {
        int a=7, b=15;
        if (a <= 5 && b <= 20) {   // faux && vrai -> faux
            b = b - 4;
            a = a + 3;
        } else {
            b = b - 8;             // b=7
            a = a + 3;             // a=10
        }
        cout << "Script 7 : " << a << " " << b << endl;
    }

    // --- Script 8 ---  Résultat : a=13, b=-2
    {
        int a=7, b=15;
        if (a < 10) {
            b = b - 5;    // b=10
            a = a + 6;    // a=13
        } else {
            b = b - 8;
            a = a + 3;
        }
        b = b - 12;       // b=-2 (exécuté dans tous les cas)
        cout << "Script 8 : " << a << " " << b << endl;
    }

    // --- Script 9 ---  Résultat : a=7, b=5
    // Python : elif -> C++ : else if
    {
        int a=7, b=2;
        if (a == 5)       b = b + 1;
        else if (a == 7)  b = b + 3;   // branche exécutée : b=5
        else              b = b + 9;
        cout << "Script 9 : a=" << a << " b=" << b << endl;
    }

    // --- Script 10 ---  Résultat : a=9, b=12
    {
        int a=7, b=2;
        if (a == 5)       b = b + 8;
        else if (a == 7) {
            b = b + 10;   // b=12
            a = a + 2;    // a=9
        }
        cout << "Script 10 : a=" << a << " b=" << b << endl;
    }

    // --- Script 11 ---  Résultat : a=2, b=2
    // Python : a//2 (division entière) -> C++ : a/2 (entre int)
    {
        int a=5, b=2;
        if (a != 5) b = b + 8;   // faux, non exécuté
        a = a / 2;                // 5/2 = 2 (division entière int/int)
        cout << "Script 11 : a=" << a << " b=" << b << endl;
    }

    // --- Script 12 ---  Résultat : a=5, b=10.92
    // Python : int(a) -> C++ : (int)a  /  int(b*100)/100 -> (int)(b*100)/100.0
    {
        double a=5.4845, b=2.9233;
        if (a != 5) b = b + 8;          // 5.4845!=5 vrai -> b=10.9233
        a = (int)a;                      // troncature -> a=5.0
        b = (int)(b * 100) / 100.0;     // troncature à 2 décimales -> b=10.92
        cout << "Script 12 : a=" << a << " b=" << b << endl;
    }

    // --- Script 13 ---  Résultat : true / false
    {
        int a=10, b=12, c=14;
        cout << "Script 13 : " << boolalpha << (a < b+c) << endl;    // true
        cout << "Script 13 : " << boolalpha << (a > b+c) << endl;    // false
    }

    // --- Script 14 ---  Résultat : a=8.0, b=9.0
    {
        double a=5.4845, b=2.9233;
        if (a >= b) {
            b = 8;   // b=8.0
            a = 9;   // a=9.0
        }
        a = (int)(a * 10) / 10.0;   // a=9.0
        b = (int)(b * 10) / 10.0;   // b=8.0
        // Note : Python affiche a=8.0 b=9.0 (a et b ont été échangés visuellement)
        // Ici après le if : a=9, b=8, puis troncature -> a=9.0, b=8.0
        // Le corrigé Python donne a=8.0 b=9.0 car print("a=",a) affiche la var a
        // qui vaut 9 (pas 8). Vérification : after if(a>=b) -> b=8,a=9 ->
        // int(9*10)/10=9.0, int(8*10)/10=8.0 -> affiche a=9.0 b=8.0
        cout << "Script 14 : a=" << a << " b=" << b << endl;
    }

    // --- Script 15 ---  Résultat : a=18
    {
        int a=7, b=15, c=10;
        if (a <= 5 && (b <= 12 && c <= 12))       a = a + 3;
        else if (a <= 5 && (b <= 12 || c <= 12))  a = a + 8;
        else                                       a = a + 11;   // a=18
        cout << "Script 15 : a=" << a << endl;
    }

    // --- Script 16 ---  Résultat : a=19, b=15
    // Python : not b>=12 -> C++ : !(b>=12)  soit  b<12
    {
        int a=7, b=15;
        if (a != 5 && !(b >= 12))    a = a + 4;    // faux (b>=12)
        else if (a > 20 || b > 20)   a = a + 8;    // faux
        else                         a = a + 12;   // a=19
        cout << "Script 16 : a=" << a << " b=" << b << endl;
    }

    // --- Script 17 ---  Résultat : a=19, b=15, c=3
    // Python : c=b//2-4 -> C++ : c=b/2-4  (b est int donc division entière)
    {
        int a=7, b=15;
        int c = b / 2 - 4;   // 15/2=7 (entier), 7-4=3
        if (a == c)           a = a + 4;
        else if (a == b)      a = a + 8;
        else                  a = a + 12;   // a=19
        cout << "Script 17 : a=" << a << " b=" << b << " c=" << c << endl;
    }

    // --- Script 18 ---  Résultat : 0, 32, 66
    // Python : listes -> C++ : tableaux (int[])
    {
        int a[] = {12, 14, 16, 18, 20, 22};
        int b[] = {2, 1, 0, 2, 1, 3};
        int c = a[0] * b[2];   // 12*0 = 0
        int d = a[2] * b[0];   // 16*2 = 32
        int e = a[5] * b[5];   // 22*3 = 66
        cout << "Script 18 : " << c << " " << d << " " << e << endl;
    }

    return 0;
}
