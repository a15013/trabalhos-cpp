#include <iostream>
#include <time.h>

using namespace std;

time_t now = time (NULL);
struct tm * t = localtime (& now);

void menu () {
    cout << "1- Dar o ano\n";
    cout << "2- Sair do programa\n";
}

int getYear() { return (t -> tm_year + 1900);}
int getMonth() { return (t -> tm_mon + 1);}
int getDay() { return t -> tm_mday;}


int aMinhaIdade (int ano, int mes, int dia) {
    int aux = getYear() - ano;

    if (getMonth() < mes) {
        aux --;
    } else {
        if(getDay() < dia && getMonth() == mes) {
           aux --;
        }
    }

    return aux;
}
int main (){
    int ano, op;

    cout << "a minha idade = " << aMinhaIdade(2010, 7, 28) << " anos\n";

    do {
        menu();
        cin >> op;


        if (op == 1) {
            ano = getYear ();
            cout << ano << "\n";

        } else if (op == 2){
            cout << "Saiste do Programa";

        }

    } while (op != 2);




    return 0;
}
