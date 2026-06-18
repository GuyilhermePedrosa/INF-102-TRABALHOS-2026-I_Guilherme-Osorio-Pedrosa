#include <iostream>
#include <string>
using namespace std;

struct carro
{
    string marca, modelo;
    int ano;
};

int main(){
    carro carros[4];

    carros[0].marca = "A";
    carros[0].modelo = "ESPORTE";
    carros[0].ano = 2030;

    carros[1].marca = "B";
    carros[1].modelo = "SUV";
    carros[1].ano = 2020;

    carros[2].marca = "C";
    carros[2].modelo = "CROSS";
    carros[2].ano = 2015;

    carros[3].marca = "C";
    carros[3].modelo = "POPULAR";
    carros[3].ano = 1990;

for(int x = 0; x < 4; x++)
{
    if(carros[x].ano > 2015)
    {
        cout << carros[x].marca << endl;
    }
}
}
