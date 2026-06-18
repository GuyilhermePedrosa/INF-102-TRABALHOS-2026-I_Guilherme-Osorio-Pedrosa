#include <iostream>
using namespace std;

int main() {
  int senha = 1234, num01, x = 0;
  while (x == 0)
  {    cout<< "Digite a senha" << endl;
    cin >> num01;
    if (num01 == senha)
    {        cout<< "Acesso permitido";
        x++;
    } else {
        cout<< "Senha incorreta, tente novamente" << endl;
    }
  }
    return 0;
}

