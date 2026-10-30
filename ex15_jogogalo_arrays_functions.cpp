#include <iostream>

using namespace std;


char grelha[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};

bool jogoTerminou = false, aceitaJogada;

void grelhaDeJogo () {
    string p0 = "0", p1 = "1", p2 = "2", p3 = "3", p4 = "4", p5 = "5", p6 = "6", p7 = "7", p8 = "8";
    cout << "\n " << p0 << "|" << p1 << "|" << p2;
    cout << "\n " << p3 << "|" << p4 << "|" << p5;
    cout << "\n " << p6 << "|" << p7 << "|" << p8;
}


int main ()
{
    int pocisao;

    string p0 = "0", p1 = "1", p2 = "2", p3 = "3", p4 = "4", p5 = "5", p6 = "6", p7 = "7", p8 = "8";
    string pecaX = "X";
    string pecaO = "O";
    /*grelha [8] = pecaX [0];
    cout << grelha[8];*/

    do {

        cout << "Comeca o X";

        grelhaDeJogo();

        cout << "\ndiz onde queres jogar: ";
        cin >> pocisao;

        if (pocisao = 0 ){
            p0 = pecaX;
        }else if (pocisao = 1){
            p1 = pecaX;
        }else if (pocisao = 2){
            p2 = pecaX;
        }else if (pocisao = 3){
            p3 = pecaX;
        }else if (pocisao = 4){
            p4 = pecaX;
        }else if (pocisao = 5){
            p5 = pecaX;
        }else if (pocisao = 6){
            p6 = pecaX;
        }else if (pocisao = 7){
            p7 = pecaX;
        }else if (pocisao = 8){
            p8 = pecaX;
        }else {
            cout << "Tem de ser de 0 a 8!";
        }

    } while (jogoTerminou = false);







    return 0;
}



/*while (!jogoTerminou) {
        aceitaJogada = false;
        cout << "\n " << p1 << "|" << p2 << "|" << p3;
        cout << "\n " << p4 << "|" << p5 << "|" << p6;
        cout << "\n " << p7 << "|" << p8 << "|" << p9;
        cout << "\ndiz onde queres jogar: ";
        cin >> pocisao;

        switch (pocisao) {
        case 1:
            if (p1 == "1") {
                p1 = peca;
                aceitaJogada = true;
            }
            break;
        case 2:
            if (p2 == "2") {
                p2 = peca;
                aceitaJogada = true;
            }
            break;
        case 3:
            if (p3 == "3") {
                p3 = peca;
                aceitaJogada = true;
            }
            break;
        case 4:
            if (p4 == "4") {
                p4 = peca;
                aceitaJogada = true;
            }
            break;
        case 5:
            if (p5 == "5") {
                p5 = peca;
                aceitaJogada = true;
            }
            break;
        case 6:
            if (p6 == "6") {
                p6 = peca;
                aceitaJogada = true;
            }
            break;
        case 7:
            if (p7 == "7") {
                p7 = peca;
                aceitaJogada = true;
            }
            break;
        case 8:
            if (p8 == "8") {
                p8 = peca;
                aceitaJogada = true;
            }
            break;
        case 9:
            if (p9 == "9") {
                p9 = peca;
                aceitaJogada = true;
            }
            break;
        default:
            cout << "\nBurrinho da silba .. 1 a 9 apenas \n";
            break;
        }

        if (aceitaJogada) {
            if (peca == "X") {
                peca = "O";
            } else {
                peca = "X";
            }
        } else {
            cout << "\nPosicao ja preenchida \n";
        }

        if (p1 == p2 && p2 == p3) {
            jogoTerminou = true;
        } else if (p4 == p5 && p5 == p6) {
        } else if (p4 == p5 && p5 == p6) {
        } else if (p4 == p5 && p5 == p6) {
        } else if (p4 == p5 && p5 == p6)

        if (p1!= "1" && p2!= "2" && p3!= "3" && p4!= "4" && p5!= "5" && p6!= "6" && p7!= "7" && p8!= "8" && p9!= "9" ) {
            jogoTerminou = true;
        }
    }*/
