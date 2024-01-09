#include <iostream>
#include <vector>

using namespace std;

const int N = 8;

void afiseazaTabla(const vector<int>& tabla) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (tabla[i] == j) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

bool esteSigur(const vector<int>& tabla, int rand, int coloana) {
    for (int i = 0; i < rand; ++i) {
        if (tabla[i] == coloana || abs(tabla[i] - coloana) == abs(i - rand)) {
            return false;
        }
    }
    return true;
}

void rezolvaProblemaReginelor(vector<int>& tabla, int rand) {
    if (rand == N) {
        static int numarSolutii = 0;
        cout << "Solutia " << ++numarSolutii << ":\n";
        afiseazaTabla(tabla);
        return;
    }

    for (int coloana = 0; coloana < N; ++coloana) {
        if (esteSigur(tabla, rand, coloana)) {
            tabla[rand] = coloana;
            rezolvaProblemaReginelor(tabla, rand + 1);
            tabla[rand] = -1;
        }
    }
}

int main() {
    vector<int> tabla(N, -1);
    rezolvaProblemaReginelor(tabla, 0);
    return 0;
}
