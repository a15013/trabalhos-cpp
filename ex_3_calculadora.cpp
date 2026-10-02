#include <iostream>

using namespace std;

int main() {
    string operacao;
    float nmr1, nmr2;
    float calculo;

    cout << "Operacoes possiveis:\n";
    cout << "somar:\n";
    cout << "subtrair:\n";
    cout << "multiplicar:\n";
    cout << "dividir:\n";

    cout << "Diga qual operacao quer efetuar: ";
    cin >> operacao;

    //cout << "Escolheste; " << operacao;

    cout << "Diz o primeiro numero: ";
    cin >> nmr1;
    cout << "Diz o segundo numero: ";
    cin >> nmr2;

    if (operacao == "somar")  {
        cout << "Soma = " << (nmr1 + nmr2);

    } else if (operacao == "subtrair")  {
        cout << "Subtracao = " << (nmr1 - nmr2);

    } else if (operacao == "Multiplicar")  {
        cout << "Multiplicacao = " << (nmr1 * nmr2);

    } else if (operacao == "dividir")  {

           if (nmr2 == 0) {
            cout << "Impossivel fazer o calculo.";
            cout << "O segundo numero nao pode ser 0 ";
            } else {
        calculo = (nmr1) / (nmr2);
        cout << "Divisao = " << calculo;
           }

    } else {
        cout << "o que raio queres fazer!!";
    }

}
