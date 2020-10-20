#include <iostream>
using namespace std;

int main() {

	const int wiersz = 2, kolumna = 3;
	int tab1[wiersz][kolumna];
	int tab2[wiersz][kolumna];
	int tab3[wiersz][kolumna];

	cout << "\tDODAWANIE DWOCH MACIERZY 2x3\n\n";
	cout << "podaj macierz pierwsza (w kolejnosci pierwszy i drugi wiersz): ";
	
	for (int i = 0; i < wiersz; i++) {
		for (int j = 0; j < kolumna; j++) {
			cin >> tab1[i][j];
		}
	}

	cout << "podaj macierz druga (w kolejnosci piewszy i drugi wiersz): ";

	for (int i = 0; i < wiersz; i++) {
		for (int j = 0; j < kolumna; j++) {
			cin >> tab2[i][j];
		}
	}
	//wypisanie macierzy na konsoli
	for (int i = 0; i < wiersz; i++) {
		for (int j = 0; j < kolumna; j++) {
			cout << tab1[i][j] << "\t";
		}
		cout << endl;
	}

	cout << "+" << endl;

	for (int i = 0; i < wiersz; i++) {
		for (int j = 0; j < kolumna; j++) {
			cout << tab2[i][j] << "\t";
		}
		cout << endl;
	}
	//dodanie dwoch macierzy
	cout << "=" << endl;

	for (int i = 0; i < wiersz; i++) {
		for (int j = 0; j < kolumna; j++) {
			tab3[i][j] = tab1[i][j] + tab2[i][j];
		}
	}
	//wypisanie wyniku
	for (int i = 0; i < wiersz; i++) {
		for (int j = 0; j < kolumna; j++) {
			cout << tab3[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 0;
}
