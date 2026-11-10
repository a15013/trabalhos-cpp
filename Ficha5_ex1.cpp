#include <iostream>

using namespace std;


int main ()
{
     int n = 10;
     int numero [n];
     int soma = 0;

     for (int i = 0; i < n; i++) {
        cout << "Diz me o #" << i+1 << " numero\n";
        cin >> numero [n];
        soma = soma + numero [n] * numero [n];
     }
        cout << "A soma dos 10 numeros e: " << soma << endl;





    return 0;
}
