#include <iostream>
using namespace std;

int main() {
    int num01, x = 0;

while (x == 0) {
        cout<< "Digite o numero de menu" << endl;
        cout<< "Cadastrar: 1, Alterar: 2, Excluir 3, Consultar: 4" << endl;
        cin >> num01;
        if (num01 >= 1 && num01 <= 4) {
            x++;
        } else {
            cout<< "Número inválido!" << endl;
        }
}
    switch (num01)
    {
    case 1:
        cout<< "Cadastrar";
        break;
    case 2:
        cout<< "Alterar";
        break;
    case 3:
        cout<< "Excluir";
        break;
    case 4:
        cout<< "Consultar";
        break;
    }
    

    return 0;
}

