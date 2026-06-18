#include <iostream>
using namespace std;
// Classe base (PAI)
class Funcionario {
protected:
string nome;
public:
Funcionario(string n) {
nome = n;
}
void exibirNome() {
cout << "Nome: " << nome << endl;
}
};
// CLT (FILHA)
class FuncionarioCLT : public Funcionario {
private:
double salarioBase;
double bonus;
public:
FuncionarioCLT(string n, double base, double b)
: Funcionario(n) {
salarioBase = base;
bonus = b;
}
double calcularSalarioCLT() {
return salarioBase + bonus;
}
};
// Freelancer (FILHA)
class Freelancer : public Funcionario {
private:
double valorHora;
int horasTrabalhadas;
public:
Freelancer(string n, double vh, int h)
: Funcionario(n) {
valorHora = vh;
horasTrabalhadas = h;
}
double calcularSalarioFreelancer() {
return valorHora * horasTrabalhadas;
}
};
int main() {
FuncionarioCLT clt("Ana", 3000, 500);
Freelancer free("Carlos", 100, 40);
cout << "\nFuncionario CLT:\n";
clt.exibirNome();
cout << "Salario: " << clt.calcularSalarioCLT() << endl;
cout << "\nFreelancer:\n";
free.exibirNome();
cout << "Salario: " << free.calcularSalarioFreelancer() << endl;
return 0;
}