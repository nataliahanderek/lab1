#include <iostream>
#include <algorithm>
using namespace std;

int main (int argc, char *argv[]) {

    //sortowanie liczb z argumentu programu

    if(argc < 2) {
        cout << "Nie podales argumentow!" << endl;
        return -1;
    }

    int ilosc = argc - 1;
    int *tab = new int[ilosc];
    
    for( int i = 1; i < argc; i++) {
        tab[i - 1] = atoi(argv[i]);
    }

    sort(tab, tab+ilosc);

    cout << "Posortowane liczby: " << endl;
    for(int i = 0; i < ilosc; i++) {
        cout << tab[i] << "\t";
    }

    return 0;
}