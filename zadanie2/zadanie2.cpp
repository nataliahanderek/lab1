#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {

    //czy podany ciag jest palindromem tekstowym, argument programu

    if(argc != 2) {
        cout<< "Podaj jeszcze raz wyraz, ktory chcesz sprawdzic!";
        return -1;
    }

    string wyraz = argv[1];
    string odwrotnosc = "";

    for(int i = 0; i < wyraz.length(); i++) {
        odwrotnosc = wyraz[i] + odwrotnosc;
    } 

    if(odwrotnosc == wyraz) {
        cout << "Wyraz jest palindromem!" << endl;
    } else {
        cout << "Wyraz nie jest palindromem!" << endl;
    }
    
    return 0;
}