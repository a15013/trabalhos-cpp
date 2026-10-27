#include <iostream>
using namespace std;

int getYear () {
    return 2026;
}

void menu () {
    cout << "1- Dar o ano\n";
    cout << "2- Sair do programa\n";
}

int main (){
    int ano, opcao;

    do {
        menu();
    cin >> opcao;

    ano = getYear ();

    if (opcao == 1) {
    cout << ano << "\n";

    } else {

    }

    } while (opcao != 2);



    return 0;
}
