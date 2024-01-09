# Documentatie Program Celor 8 Regine

## Descriere

Acest program C++ rezolva problema celor 8 regine folosind un algoritm de backtracking. Scopul este de a plasa 8 regine pe o tabla de sah 8x8 astfel incat sa nu se atace reciproc.

## Structura Fisierelor

- `main.cpp`: Contine functia `main` si logica principala a programului.
- `regine.h`: Fisier header pentru declararea functiilor.
- `regine.cpp`: Implementarea functiilor pentru rezolvarea problemei celor 8 regine.

## Functii

### `void afiseazaTabla(const vector<int>& tabla)`

Afiseaza tabla de sah cu reginele plasate.

### `bool esteSigur(const vector<int>& tabla, int rand, int coloana)`

Verifica daca o regina poate fi plasata intr-o anumita pozitie fara sa se atace reciproc cu celelalte regine.

### `void rezolvaProblemaReginelor(vector<int>& tabla, int rand)`

Functia principala de backtracking care incearca sa plaseze reginele pe tabla de sah.

## Utilizare

1. Cloneaza acest repository.
2. Compileaza programul C++ folosind un compilator compatibil.
3. Ruleaza executabilul generat.
4. Observa solutiile afisate pe consola.