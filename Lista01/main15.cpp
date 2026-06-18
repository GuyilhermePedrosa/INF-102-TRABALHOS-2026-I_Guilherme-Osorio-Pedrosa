#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um número: ";
    cin >> n;
    
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    
    cout << "A soma de 1 até " << n << " é: " << soma << endl;
    
    return 0;
}