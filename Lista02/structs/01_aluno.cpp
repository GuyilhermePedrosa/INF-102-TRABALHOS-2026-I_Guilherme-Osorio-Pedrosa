#include <iostream>
#include <string>
using namespace std;
   
struct Aluno
    {
        string nome;
        int nota;
    };

int main (){
 
    Aluno alunos[5];
    
    alunos[0].nome = "Lucas";
    alunos[0].nota = 10;
    
    alunos[1].nome = "Hugo";
    alunos[1].nota = 9;

    alunos[2].nome = "Igor";
    alunos[2].nota = 4;

    alunos[3].nome = "Gustavo";
    alunos[3].nota = 8;

    alunos[4].nome = "Marcos";
    alunos[4].nota = 6;

    for(int x = 0; x <= 4; x++)
    {
     cout << alunos[x].nome << endl;
     cout << alunos[x].nota << endl;
    }
    return 0;
}