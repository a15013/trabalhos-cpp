#include <iostream>

using namespace std;

int main ()
{
    int n1, n2, aux;
    int soma = 0;

    cout << "Diz-me um numero\n";
    cin >> n1;
    cout << "Diz-me outro numero\n";
    cin >> n2;

    if ( n1 > n2 ) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    for (int i=n1; i <=n2; i++) {
        soma = soma + i;
    }

    cout << soma;

    return 0;

}
