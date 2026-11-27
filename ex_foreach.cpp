#include <iostream>

using namespace std;

int main () {
    string nomes[] = {"pedro", "kelson", "goncalo", "lucas", "bernardo"};

    for(string nms : nomes) {
        cout << nms << "\n";
    }
}