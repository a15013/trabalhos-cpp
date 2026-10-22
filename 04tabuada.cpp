#include <iostream>

using namespace std;

int main ()
{
    float nr, tabuada;
    int i = 1;

    cout << "Diga um numero para fazer a tabuada.\n";
    cin >> nr;

    for (int i = 1; i <= 10; i++)
    {
       tabuada = i * nr;
       cout << tabuada << "\n";
    }



    return 0;
}
