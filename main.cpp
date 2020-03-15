#include <iostream>
#include <cmath>

using namespace std;

int a, b, c, delta;

/**
 * Główna funkcja
 * @return
 */
int main() {

    cout << "Program do obliczania funkcji kwadratowej" << endl << endl;
    cout << "Proszę podać a= ";
    cin >> a;
    cout << "Proszę podać b= ";
    cin >> b;
    cout << "Proszę podać c= ";
    cin >> c;

    // obliczenie delty
    delta = b * b - (4 * a * c);

    if (delta > 0) {
        cout << endl;
        cout << "delta > 0" << endl << endl;
        cout << "Wynik: x1 = " << (-b - sqrt(delta)) / (2 * a) << " ,x2 = " << (-b + sqrt(delta)) / (2 * a);
    } else if (delta < 0) {
        cout << "To równanie funkcji kwadratowej nie posiada rozwiązań.";
    } else {
        cout << endl;
        cout << "delta = 0" << endl << endl;
        cout << "Wynik: x0 = " << -b / (2 * a);
    }

    //zakończenie programu
    return 0;
}
