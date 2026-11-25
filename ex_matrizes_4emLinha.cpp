#include <stdio.h>
#include <iostream>
using namespace std;



int col = 0;

const int LINHAS = 6;
const int COLUNAS = 9;

void preencheTabuleiro(string arr[LINHAS][COLUNAS]);
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

    preencheTabuleiro(tabuleiro);
    tabuleiro[0][1] = "s";

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


void preencheTabuleiro(string arr[LINHAS][COLUNAS]) {

    for (int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
                arr[i][j] = " ";
        }
    }
}


void mostrarTabuleiro(string arr[LINHAS][COLUNAS]) {

    cout << "\n***** 4 EM LINHA *****\n\n";
    for (int i = LINHAS-1; i >= 0; i--) {
            cout << "|";
        for(int j = 0; j < COLUNAS; j++) {
              cout << arr[i][j] << "|";
        }
        cout << "\n";
    }

    cout << "|";
    for(int j = 0; j < COLUNAS; j++) {
              cout << "-" << "|";
    }
    cout << "\n" << "|";
    for(int j = 0; j < COLUNAS; j++) {
              cout << j << "|";
    }

}


int pedePecaJogador() {

    //int col;

    cout << "\n\nEm que coluna quer jogar (entre 1 e 9)?";
    cin >> col;
    col = col -1;
    /*if(col < 0 && col > 9) {
        cout << "Tem de ser entre 1 e 9!!";
    }*/

    return 0;
}



bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]) {
    //int col = coluna -1;

    for(int i = LINHAS-1; i > 0; i--) {
        if(arr[i][col] == " ") {
            arr[i][col] = peca;
            return true;
        }
    }
    return false;
}


bool tabuleiroCheio(string arr[LINHAS][COLUNAS]){
    return false;
}


bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]) {
    return false;
}
