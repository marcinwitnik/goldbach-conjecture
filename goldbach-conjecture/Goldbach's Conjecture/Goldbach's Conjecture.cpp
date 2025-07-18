#include <iostream>
using namespace std;

bool czyPierwsza(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    while (true) {
        int liczba;
        cout << "\nPodaj parzysta liczbe naturalna wieksza od 2 (0 aby zakonczyc): ";
        cin >> liczba;

        if (liczba == 0) {
            cout << "Zakonczono program." << endl;
            break;
        }

        if (liczba <= 2 || liczba % 2 != 0) {
            cout << "To nie jest poprawna parzysta liczba." << endl;
            continue;
        }

        bool znaleziono = false;

        for (int i = 2; i <= liczba / 2; i++) {
            int j = liczba - i;
            if (czyPierwsza(i) && czyPierwsza(j)) {
                cout << liczba << " = " << i << " + " << j << endl;
                znaleziono = true;
            }
        }

        if (!znaleziono) {
            cout << "Hipoteza Goldbacha obalona!" << endl;
        }
    }

    return 0;
}
