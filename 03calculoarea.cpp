#include <iostream>

using namespace std;

int main ()
{
    float raio, Pi;
    Pi = 3.1416;

    cout << "Diga o valor do raio.\n";
    cin >> raio;
    raio = (Pi * raio * raio);
    cout << "A area do circulo e: " << raio;


    return 0;
}
