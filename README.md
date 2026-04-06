## Programmes avec C++

> Cours et exercices d'algorithmique en C++

---

## 📁 Contenu du dépôt

| Fichier | Description |
|---|---|
| `algo_cpp_v2026_info.docx` | Cours complet C++ (variables, conditions, boucles, fonctions) |
| `algo_cpp_v2026_info_COR.docx` | Corrigé des exercices |
| `application01.cpp` — `application17.cpp` | Exercices compilables individuellement |

---

## 🗂️ Applications — Progression pédagogique

| # | Thème | Notions C++ abordées |
|---|---|---|
| 01 | Variables et types de données | `int`, `double`, `string`, `bool`, `cout` |
| 02 | Carré d'un nombre | `cin`, saisie utilisateur |
| 03 | Formes d'affectation | Initialisation, constantes `const` |
| 04 | Opérations (plusieurs scripts) | `/`, `%`, `length()`, `max()`, `min()`, indices |
| 05 | Positif ou négatif | `if / else` |
| 06 | Remise commerciale (2 tranches) | `if / else`, calcul en `double` |
| 07 | Remise commerciale (3 tranches) | `else if` imbriqué |
| 08 | Remise selon logigramme | `else if` (seuils 8 000 / 12 000 €) |
| 09 | Scripts conditions (plusieurs scripts) | `&&`, `||`, `!`, division entière, tableaux |
| 10 | Boucle `for` — carrés | `for (int i = 1; i <= 10; i++)` |
| 11 | Boucle `for` — jours de janvier | `for`, `cout` sans `endl` |
| 12 | Boucle `while` — nombres pairs | `while`, incrément |
| 13 | Rebonds d'une balle | `while`, `double`, accumulation |
| 14 | Doublement d'un capital | `while`, `*=`, troncature décimale |
| 15 | Somme de 1 à n | `while` + validation de saisie, décomposition |
| 16 | Fonctions `carre()` et `cube()` | Définition et appel de fonctions |
| 17 | Scripts avec fonctions (2 scripts) | Fonctions `void`, passage de paramètre |

---

## ⚙️ Compilation

```bash
# Compiler un exercice
g++ -std=c++17 application01.cpp -o application01
./application01

# Compiler tous les exercices d'un coup
for f in application*.cpp; do
    g++ -std=c++17 "$f" -o "${f%.cpp}" && echo "✔ $f"
done
```

> Testé avec `g++ 11+`. Aucune dépendance externe.

---

## 📋 Correspondances Python → C++

| Python | C++ |
|---|---|
| `print(x)` | `cout << x << endl;` |
| `input()` | `cin >> x;` |
| `n**2` | `n * n` |
| `a // b` | `a / b` (entre `int`) |
| `a % b` | `a % b` |
| `len(s)` | `s.length()` |
| `and / or / not` | `&& / \|\| / !` |
| `True / False` | `true / false` |
| `def f(x):` | `int f(int x) { }` |
| `elif` | `else if` |

---

## 🎯 Public cible

Cours destiné aux élèves de lycée (SNT / spécialité NSI / informatique et gestion) découvrant la programmation via Python et abordant C++ comme second langage compilé.

---

## 📄 Licence

Usage pédagogique — LPO d'Estournelles de Constant, La Flèche (72).
