#include <iostream>

using namespace std;

int main ()
{
    int anos;

    cout << "Diga um numero em anos para transformar em meses \n";
    cin >> anos;
    anos = anos * 12;
    cout << "Isso da: " << anos << " meses";


    return 0;
}
