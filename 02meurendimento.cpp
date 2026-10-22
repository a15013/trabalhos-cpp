#include <iostream>

using namespace std;

int main ()
{
    float dnh, hrs;
    {
        cout << "quanto voce ganha por hora? ";
        cin >> dnh;
        cout << "\nquantas horas trabalha no mes? ";
        cin >> hrs;
        dnh = dnh * hrs;
        cout << "\nVoce ganha no mes por volta de: " << dnh;
    }
    dnh = dnh * 12;
    cout << "\nE no ano por volta de: " << dnh;



    return 0;
}
