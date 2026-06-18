#include <iostream>
#include <string>
using namespace std;

struct produto {
    string nome;
    float preco;
    int quantidade;
};

int main() {
    produto produtos[3];

    produtos[0].nome = "Maca";
    produtos[0].preco = 10;
    produtos[0].quantidade = 2;

    produtos[1].nome = "Uva";
    produtos[1].preco = 2;
    produtos[1].quantidade = 5;

    produtos[2].nome = "Carne";
    produtos[2].preco = 5;
    produtos[2].quantidade = 7;

    for(int x = 0; x < 3; x++) {
        cout <<  produtos[x].nome << " " << produtos[x].preco * produtos[x].quantidade << endl;
    }
    return 0;
}