#include <iostream>

using namespace std;


int factorial (int numero) {
    if (numero == 1 || numero == 0){
        return 1;
    } else {
        return numero * factorial (numero - 1);
    }

}


int fibonacci (int numero) {
    if (numero == 1 || numero == 2){
        return 1;
    } else {
        return fibonacci(numero - 1) + fibonacci(numero - 2);
    }
}


int main ()
{
    int n = 4;

    cout << "O Factorial de " << n << " e: " << factorial (n) << endl;
    cout << "O fibonacci de " << n << " e: " << fibonacci(n) << endl;

    return 0;
}
