#include <iostream>
using namespace std;

int main()
{
	cout << "\tBody Mass Index\n\n";

	double masa_ciala = 0, wzrost = 0;
	cout << "Podaj swoja mase ciala w kilogramach: ";
	cin >> masa_ciala;
	cout << "Podaj swoj wzrost w metrach: ";
	cin >> wzrost;

	while(wzrost > 3) {
		cout << "podales zly wzrost, podaj jeszcze raz wzrost w metrach: ";
		cin >> wzrost;
	}

	double bmi = masa_ciala / (wzrost*wzrost);
	cout << "\nTwoj wskaznik BMI wynosi: " << bmi << "\n\n";

	if (bmi < 16) {
		cout << "CIERPISZ NA WYGLODZENIE! SPRAWDZ SAM/A:";
	}
	else if (bmi > 16 && bmi < 16.99) {
		cout << "JESTES WYCHUDZONY/A! SPRAWDZ SAM/A:";
	}
	else if (bmi > 17 && bmi < 18.49) {
		cout << "MASZ NIEDOWAGE! SPRAWDZ SAM/A:";
	}
	else if (bmi > 18.5 && bmi < 24.99) {
		cout << "TWOJA WAGA JEST PRAWIDLOWA! SPRAWDZ SAM/A:";
	}
	else if (bmi > 25 && bmi < 29.99) {
		cout << "MASZ NADWAGE! SPRAWDZ SAM/A:\n";
	}
	else if (bmi > 30 && bmi < 34.99) {
		cout << "MASZ I STOPIEN OTYLOSCI! SPRAWDZ SAM/A:";
	}
	else if (bmi > 35 && bmi < 39.99) {
		cout << "MASZ II STOPIEN OTYLOSCI! SPRAWDZ SAM/A:";
	}
	else if (bmi > 40) {
		cout << "MASZ OTYLOSC SKRAJNA! SPRAWDZ SAM/A:";
	}

	cout << "\n\n\tTabelka wartosci BMI";
	cout << "\n < 16 - wyglodzenie\n16 - 16.99 - wychudzenie\n17 - 18.49 - niedowaga\n18.5 - 24.99 - wartosc prawidlowa\n25 - 29.99 - nadwaga\n30 - 34.99 - I stopien otylosci\n35 - 39.99 - II stopien otylosci\n > 40 - otylosc skrajna\n\n";

	return 0;
}
