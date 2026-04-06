// ============================================================
// Application 13 - Boucle while : rebonds d'une balle
// Equivalent C++ du script Python de l'Application 13
// ============================================================
// Problème :
//   Une balle tombe de 20 mètres (= 20 000 mm).
//   Elle rebondit à 3/4 de la hauteur précédente.
//   La balle est immobile quand la hauteur < 1 mm.
//   Combien de rebonds sont nécessaires ?
// ============================================================
// Python d'origine (corrigé en rouge) :
//   hauteur = 20000
//   nombre  = 0
//   while hauteur > 1:
//       hauteur = hauteur * 0.75
//       nombre  = nombre + 1
//       print("Après rebond", nombre, ", hauteur", hauteur, "mm")
//   print(nombre, "rebonds nécessaires")
// ============================================================

#include <iostream>
using namespace std;

int main() {
    double hauteur = 20000;   // hauteur en mm (20 m = 20 000 mm)
    int    nombre  = 0;       // nombre de rebonds

    while (hauteur > 1) {
        hauteur = hauteur * 0.75;   // ou : hauteur *= 0.75;
        nombre  = nombre + 1;       // ou : nombre++;
        cout << "Apres rebond " << nombre
             << ", hauteur de la balle " << hauteur << " mm" << endl;
    }

    cout << nombre << " rebonds necessaires" << endl;

    return 0;
}
