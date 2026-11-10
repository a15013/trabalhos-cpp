#include <iostream>

using namespace std;

#define NLETRAS 10

int numTentativas = 5;

// só letras maiúsculas, palavras máx de 10 caracteres
// 5 tentativas máx!

void mostrarGrelha (char pl[NLETRAS]) {
    cout << "\n";
    for (int i = 0; i < NLETRAS; i++){
        if (pl[i] != ' ') {
            cout << "-" << " ";
        }
    }
}

int main () {

    bool ganhou = false;
    char letra;
    char palavra [NLETRAS] = {'C', 'A', 'S', 'A', ' ', ' ', ' ', ' ', ' ', ' '};

    while (numTentativas > 0) {
        mostrarGrelha(palavra);

        cout << "\nRestam " << numTentativas << " tentativas.";
        cout << "\nDiz a letra que queres verificar : ";
        cin >> letra;
        numTentativas--;

    }
    cout << "\n\n---------------------------------";
    if (ganhou) {
        cout << "\nParabens .. ganhaste.";
    } else {
        cout << "\nEs um nabo a portugues. perdeste.";
    }








    return 0;
}
