#include <iostream>

using namespace std;


int main ()
{
    int n = 21;
    char nr [n];
    int nmr_psomar [n];

    cout << "Quantos numeros quer somar? (MAX. 20 NUMEROS!)\n";
    cin >> nmr_psomar [n];
    cout << "Diga esses " << nmr_psomar [n] << " numeros para somar\n";
    cin >> nr [n];

    return 0;
}
