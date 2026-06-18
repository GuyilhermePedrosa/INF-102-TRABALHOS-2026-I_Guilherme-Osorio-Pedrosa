#include <iostream>
#include <string>
using namespace std;
   
struct funcionario
{
    string nome;
    float salario;
};

int main(){
    float maiorSalario = 0;
    funcionario funcionarios[3];

    funcionarios[0].nome = "Lucas";
    funcionarios[0].salario = 1000;

    funcionarios[1].nome = "Eduardo";
    funcionarios[1].salario = 6040;

    funcionarios[2].nome = "Hugo";
    funcionarios[2].salario = 5000;
for(int x = 1; x <= 2; x++)
{
    if (funcionarios[x].salario > maiorSalario)
    {
       maiorSalario = funcionarios[x].salario;
    }

}
cout << maiorSalario << endl;
}
