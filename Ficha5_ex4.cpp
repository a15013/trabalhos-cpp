#include <iostream>

using namespace std;

#define N 10

int main () {
    int arrayNums [N] = {1, 12, 5, 6, 2, 13, 7, 4, 0, 3};
    int aux;

    for (int j = 0; j < (N-1); j++) {
        for (int i = (j+1); i < N; i++) {
            if (arrayNums [j] < arrayNums [i]) {
                aux = arrayNums [i];
                arrayNums [i] = arrayNums [j];
                arrayNums [j] = aux;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << "\n" << arrayNums [i];
    }
    cout << "\n**** FIM ****\n";

    return 0;
}
