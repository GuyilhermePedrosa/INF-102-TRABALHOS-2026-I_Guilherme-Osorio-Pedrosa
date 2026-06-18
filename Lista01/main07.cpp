#include <iostream>
using namespace std;

int main() {
    int num01, num02, num03;

    cout<< "Primeiro numero " << endl;
    cin >> num01;
    cout<< "Segundo numero " << endl;
    cin >> num02;
    cout<< "Divisão: 1, Multiplicação: 2, Subtração: 3, Adição: 4" << endl;
   
    switch (num03)
    {
     case 1:
        cout<< "Divisão: " << num01 / num02;
        break;
    case 2: 
        cout<< "Multiplicação: " << num01 * num02;
        break;
    case 3:
        cout<< "Subtração: " << num01 - num02;
        break;
    case 4:
        cout<< "Adição: " << num01 + num02;
        break;
    }
    

    return 0;
}

