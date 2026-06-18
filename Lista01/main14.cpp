#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Digite um número: ";
    cin >> numero;
    
    cout << "\nTabuada de " << numero << ":\n";
    
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << "\n";
    }
    
    return 0;
}