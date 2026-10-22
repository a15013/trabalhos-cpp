#include <iostream>

using namespace std;

int main ()
{
    float n1, n2, n3;
    float media;

    cout << "Diga 3 numeros inteiros para fazer a media. \n";
    cin >> n1;
    cin >> n2;
    cin >> n3;
    media = (n1 + n2 + n3) / 3;
    cout << "a media desses 3 numeros e " << media;


    return 0;
}
