#include <stdio.h>
#include <iostream>

using namespace std;

void mostrarMsg();
void troca(int &x, int &y);

int main () {
    int a = 5, b = 3;

    mostrarMsg();

    troca(a, b);

    cout << "\nA: " << a << " // B: " << b;
    return 0;
}

void mostrarMsg() {
    cout << "Estou a mostrar a funcao mostrarMsg";
}

void troca(int &x, int &y) {
    int aux = x;
    x = y;
    y = aux;
}
