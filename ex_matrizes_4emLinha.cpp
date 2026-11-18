#include <stdio.h>
#include <iostream>
using namespace std;

const int LINHAS = 6;
const int COLUNAS = 9;

void mostrarTabuleiro(string arr[LINHAS][COLUNAS]);
int pedePecaJogador();
bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]);
bool tabuleiroCheio(string arr[LINHAS][COLUNAS]);
bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]);

int main() {
    string tabuleiro[LINHAS][COLUNAS];
    int quemJoga = 1;
    int quemGanhou = 0;
    int colunaJogar = 0;
    bool jogou = false;

    do {
            mostrarTabuleiro(tabuleiro);
            colunaJogar = pedePecaJogador();
            jogou = colocaPecaTabuleiro("X", colunaJogar, tabuleiro);


    } while (!ganhouJogo(quemGanhou, tabuleiro) && !tabuleiroCheio(tabuleiro));

    /*tabuleiro[0][1] = "s";
    mostrarTabuleiro(tabuleiro);
    mostrarTabuleiro(tabuleiro);*/

    return 0;
}

void mostrarTabuleiro(string arr[LINHAS][COLUNAS]) {
   /* cout << "\nLinha 1: Coluna 2: -" << arr[0][1] << "-";
    arr[0][1] = "a";*/
}

int pedePecaJogador() {
    return 0;
}

bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]) {
    return false;
}

bool tabuleiroCheio(string arr[LINHAS][COLUNAS]){
    return false;
}

bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]) {
    return false;
}

