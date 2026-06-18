#include <iostream>
#include <string>
using namespace std;


struct aluno{
    string nome, condicao;
    int nota01, nota02, media;
};

int main(){
    aluno alunos[5];

    alunos[0].nome = "Andre";
    alunos[0].nota01 = 10;
    alunos[0].nota02 = 5;
    alunos[0].media = (alunos[0].nota01 + alunos[0].nota02)/2;
    alunos[0].condicao = "";

    alunos[1].nome = "Luiz";
    alunos[1].nota01 = 9;
    alunos[1].nota02 = 2;
    alunos[1].media = (alunos[1].nota01 + alunos[1].nota02)/2;
    alunos[1].condicao = "";

    alunos[2].nome = "Carlos";
    alunos[2].nota01 = 5;
    alunos[2].nota02 = 7;
    alunos[2].media = (alunos[2].nota01 + alunos[2].nota02)/2;
    alunos[2].condicao = "";

    alunos[3].nome = "Bernardo";
    alunos[3].nota01 = 1;
    alunos[3].nota02 = 10;
    alunos[3].media = (alunos[3].nota01 + alunos[3].nota02)/2;
    alunos[3].condicao = "";

    alunos[4].nome = "Luisa";
    alunos[4].nota01 = 8;
    alunos[4].nota02 = 9;
    alunos[4].media = (alunos[4].nota01 + alunos[4].nota02)/2;
    alunos[4].condicao = "";

for(int x = 0; x < 5; x++)
{
    if(alunos[x].media >= 7)
    {
        alunos[x].condicao = "APROVADO";
    }

    else{
        alunos[x].condicao = "REPROVADO";
    }

    cout << alunos[x].nome << " "<< alunos[x].media << " "<< alunos[x].condicao<< endl;
}
}