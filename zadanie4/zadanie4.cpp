#include <iostream>
using namespace std;

int LiczDzielniki(int dana) {

    int suma = 0;
    for (int i = 1; i < dana; i++) {
        if(dana % i == 0) {
            suma += i;
        }
    }
    return suma;
}

int main() {

    int x, y;
    cout << "\tLICZBY SKOJARZONE" << endl;
    cout << "Podaj pierwsza liczbe: ";
    cin >> x;
    cout << "Podaj druga liczbe: ";
    cin >> y;
    cout << "Suma dzielnikow x = " << LiczDzielniki(x) << " oraz suma dzielnikow y = " << LiczDzielniki(y) << endl;

    if ((LiczDzielniki(x) == y + 1) && (LiczDzielniki(y) == x + 1)) {
        cout << "Liczby sa skojarzone!" << endl;
    } else {
        cout << "Liczby nie sa skojarzone!" << endl;
    }

    return 0;
}