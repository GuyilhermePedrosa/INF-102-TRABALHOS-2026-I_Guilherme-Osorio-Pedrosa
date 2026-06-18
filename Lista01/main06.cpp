#include <iostream>
using namespace std;

int main() {
    int num01, x = 0;
    while (x == 0)
    {
         cout<< "Digite um numero de 1 a 7" << endl;
        cin >> num01;
        if (num01 >= 1 && num01 <= 7)
        {
            x++;
        } else {
            cout<< "Digite um numero de 1 a 7" << endl;
        }
    }
    switch (num01)
    {
    case 1:
        cout<< "Domingo";
        break;
    case 2:
        cout<< "Segunda-feira";
        break;
    case 3:
        cout<< "Terça-feira";
        break;
    case 4:
        cout<< "Quarta-feira";
        break;
    case 5:
        cout<< "Quinta-feira";
        break;
    case 6:
        cout<< "Sexta-feira";
        break;
    case 7:
        cout<< "Sábado";
        break;
    default:
        cout<< "Número inválido!";
        break;
    }
    

    return 0;
}

