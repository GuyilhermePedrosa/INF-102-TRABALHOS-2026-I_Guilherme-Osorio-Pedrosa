#include <iostream>
using namespace std;
// Classe base (PAI)
class ContaBancaria {
protected:
string titular;
int numero;
double saldo;
public:
ContaBancaria(string t, int n, double s) {
titular = t;
numero = n;
saldo = s;
}
void sacar(double valor) {
if (valor <= saldo) {
saldo -= valor;
cout << "Saque realizado. Saldo: " << saldo << endl;
} else {
cout << "Saldo insuficiente" << endl;
}
}
void exibirDados() {
cout << "Titular: " << titular << endl;
cout << "Numero: " << numero << endl;
cout << "Saldo: " << saldo << endl;
}
};
// Classe ContaPoupanca (FILHA)
class ContaPoupanca : public ContaBancaria {
private:
double taxaJuros;
public:
ContaPoupanca(string t, int n, double s, double taxa)
: ContaBancaria(t, n, s) {taxaJuros = taxa;
}
void calcularRendimentoPoupanca() {
saldo += saldo * taxaJuros;
cout << "Rendimento da Poupanca aplicado. Novo saldo: " << saldo << endl;
}
void sacarPoupanca(double valor) {
cout << "Saque na ContaPoupanca" << endl;
sacar(valor); // chama método da base
}
void exibirDadosPoupanca() {
cout << "--- Conta Poupanca ---" << endl;
exibirDados();
cout << "Taxa de Juros: " << taxaJuros << endl;
}
};
// Classe ContaInvestimento (FILHA)
class ContaInvestimento : public ContaBancaria {
private:
double rendimentoMensal;
public:
ContaInvestimento(string t, int n, double s, double rendimento)
: ContaBancaria(t, n, s) {
rendimentoMensal = rendimento;
}
void calcularRendimentoInvestimento() {
saldo += saldo * rendimentoMensal;
cout << "Rendimento da Conta Investimento aplicado. Novo saldo: " << saldo << endl;
}
void sacarInvestimento(double valor) {
if (valor > 1000) {
cout << "Limite de saque excedido na ContaInvestimento" << endl;
} else {
cout << "Saque na ContaInvestimento" << endl;
sacar(valor);
}
}
void exibirDadosInvestimento() {
cout << "--- Conta Investimento ---" << endl;
exibirDados();
cout << "Rendimento Mensal: " << rendimentoMensal << endl;
}
};int main() {
ContaPoupanca cp("Ana", 1, 1000, 0.02);
ContaInvestimento ci("Carlos", 2, 5000, 0.05);
cout << "\n--- Teste Conta Poupanca ---" << endl;
cp.exibirDadosPoupanca();
cp.calcularRendimentoPoupanca();
cp.sacarPoupanca(200);
cout << "\n--- Teste Conta Investimento ---" << endl;
ci.exibirDadosInvestimento();
ci.calcularRendimentoInvestimento();
ci.sacarInvestimento(1500);
ci.sacarInvestimento(500);
return 0;
}
// 2) Classe PAI: Funcionario
FILHAS: FuncionarioCLT e Freelancer
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
bonus = b;}
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