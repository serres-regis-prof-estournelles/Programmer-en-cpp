// ============================================================
// Application 14 - Boucle while : doublement d'un capital
// Equivalent C++ du script Python de l'Application 14
// ============================================================
// Problème :
//   Capital initial : 10 000 € à 3% par an (intérêts capitalisés).
//   En combien d'années le capital aura-t-il doublé (>= 20 000 €) ?
// ============================================================
// Python d'origine (corrigé en rouge) :
//   cap = 10000
//   an  = 0
//   while cap <= 20000:
//       cap *= 1.03
//       an  += 1
//   print(an, "années")
//   print("Montant du capital", int(cap*100)/100, "€")
// ============================================================
// Résultat attendu : 24 années, capital ~20 327.94 €
// ============================================================

#include <iostream>
using namespace std;

int main() {
    double cap = 10000;   // montant du capital
    int    an  = 0;       // nombre d'années

    while (cap <= 20000) {
        cap *= 1.03;   // equivalent de cap = cap * 1.03
        an  += 1;      // equivalent de an = an + 1  (ou an++)
    }

    cout << an << " annees" << endl;

    // Python : int(cap*100)/100 -> troncature à 2 décimales
    // C++ : (int)(cap*100) / 100.0  (même effet)
    double cap_arrondi = (int)(cap * 100) / 100.0;
    cout << "Montant du capital " << cap_arrondi << " euros" << endl;

    return 0;
}
