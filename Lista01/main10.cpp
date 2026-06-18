#include <iostream>
using namespace std;

int main() {
   
    int soma = 0, num = 0, x = 0;
  while (x == 0)
  {
    cout<< "Digite um numero"<< endl;
    cin >> num;
    soma += num;
    if (num == 0)
    {
        x++;
    }
  }
  cout<< "A soma dos numeros é: " << soma;
    return 0;
}

