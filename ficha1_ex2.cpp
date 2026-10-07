#include <iostream>

using namespace std;

int main ()
{
    int opcao;
    for (int i = 1; i >= 0; i++) {

    cout << "0 - Sair do Programa \n";
    cout << "1 - E bom programador \n";
    cout << "2 - E muito bom programador \n";
    cout << "3 - E excelente programador \n";
    cout << "Opcao: ";
    cin >> opcao;

    switch (opcao){
        case 0:
            cout << "Sair do Programa \n";
            i = -2;
           break;
        case 1:
            cout << "E bom programador \n";
            break;
        case 2:
            cout << "E muito bom programador \n";
            break;
        case 3:
            cout << "E excelente programador \n";
            break;
        default:
            cout << "Nao sei o que me estas a pedir \n";
            break;
    }
        }

    return 0;
}
