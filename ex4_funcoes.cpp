#include <iostream>

using namespace std;


string  pedeNome() {
    string nome, sobrenome;
    cout << "Diga o seu primeiro nome:\n";
    cin >> nome;
    cout << "Diga o seu ultimo nome:\n";
    cin >> sobrenome;

    return nome + " " + sobrenome;
}


int main ()
{
    string nome = pedeNome();
    cout << "O nome do caro Sr. e: " << nome;

    return 0;
}
