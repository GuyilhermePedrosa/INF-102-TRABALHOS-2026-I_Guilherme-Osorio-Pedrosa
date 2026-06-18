# Estudo Dirigido — Programação Orientada a Objetos em C++


### 1) Diferenças entre Programação Estruturada e POO

Preencha a tabela comparativa abaixo:

| Característica | Programação Estruturada | Programação Orientada a Objetos |
| :--- | :--- | :--- |
| **Organização do código** |Linear | Baseadad em Classes e Objetos |
| **Foco principal** |Logica e ALgoritimo | Entidades e dados|
| **Reutilização de código** | Possivel mas simples | Altamente Reutilizavel|
| **Uso de funções** |Nenhuma | Base para a logica|
| **Uso de objetos** | Não| Sim|
| **Facilidade de manutenção** | Baixa| Alta|

---

### 2) Definições

Defina os seguintes conceitos de POO:

* **a) Classe:** *Um molde*  
* **b) Objeto:** *A materilização de uma classe* 
* **c) Atributo:** *Caracteristicas desse objeto* 
* **d) Método:** * Funções* 
* **e) Encapsulamento:** *Ocultamento de Informações da classe para uso 'normal'* 
* **f) Herança:** *Uma classe ou objeto herda atributos os metodos de outro* 
* **g) Abstração:** *A utilização de apenas as caracteristicas que importa para o obejeto* 
* **h) Polimorfismo:** *A capacidade de objetos derivados de uma classe pai responderem de forma unica e independente* 
---
### 3) Analise o código abaixo:
```cpp
class Pessoa {
private:
    string nome;
    int idade;

public:
    void setNome(string n) {
        nome = n;
    }
    void setIdade(int i) {
        idade = i;
    }
    void mostrar() {
        cout << nome << " - " << idade << endl;
    }
};
```
* **a) Qual é o nome da classe?** *Pessoa*
* **b) Quais são os atributos?** *Nome e Idade*
* **c) Quais são os métodos?** *setNome setIdade mostrar*
* **d) O código utiliza encapsulamento?** *Sim pois os stributos são privados*
---
### 4) Private, Protected e Public

Explique a diferença entre:

* **private:**  *Pode ser acessado apenas pela classe que a criou*
* **protected:** *Pode ser acessado pela crasse que a criou e suas filhas*
* **public:** *Poide ser acessado de qualquer lugar*

Depois complete a tabela:

| Modificador | Pode ser acessado na própria classe | Pode ser acessado pelas classes filhas | Pode ser acessado fora da classe |
| :--- | :---: | :---: | :---: |
| **private** | True | False| False |
| **protected** |True | True | False |
| **public** | True | True | True |
---
### 5)Correção de Código
O código abaixo possui problemas de encapsulamento.
```cpp
class Conta {
public:
double saldo;
```
* **a) Explique o problema.** * Atributos estão como publico*
* **b) Reescreva a classe corretamente utilizando encapsulamento.** 

```cpp
class Conta {
private:
double saldo;
}
```

* **c) Crie métodos depositar() e sacar().** 
```cpp
double depositar(double valor){
    saldo = saldo + valor;
    return(saldo);
}
double sacar(double valor){
    saldo = saldo - valor;
    return(saldo);
}
```
---
### 6) Crie uma classe chamada Produto contendo:
* nome
* preco
* quantidade
#### A classe deve possuir:
* construtor
* método para adicionar estoque
* método para remover estoque
* método para mostrar informações

```cpp
class Produto{
    private:
        string nome;
        double preco;
        int quantidade;
    public:
        Produto(string n, double p, int q ){
            nome = n;
            preco = p;
            quantidade = q;
        }
        void addEstoque(int valor){
            quantidade += valor;
        }
        void rmvEstoque(int valor){
            if(valor > 0 and valor <= quantidade){
            quantidade -= valor;
            }else {
                cout << "Error" << endl;
            }
        }
        void viewProduto(){
            cout << nome << " " << preco << " " << quantidade
        }
}
```
---
## 7) Conceitual
Responda:
* **a) O que é um construtor?** *Função que inicia os atributos*
* **b) Quando ele é executado?** *Assim que o objeto é criado*
* **c) O que é um destrutor?** *Função que exclui os valores dos atributos*
* **d) Quando o destrutor é chamado?** *Assim que o objeto deixa de existir*
* **e) Qual a vantagem de usar construtores?** *A criação de atributos com valores validos'*
---
## 8) Exercício – Análise de Execução
Analise o código:
```cpp
#include <iostream>
using namespace std;
class Teste {
public:
Teste() {
cout << "Construtor chamado" << endl;
}
~Teste() {
cout << "Destrutor chamado" << endl;
}
};
int main() {
Teste t1;
return 0;
}
```
Responda:
* **a) O que será exibido na tela?** *Construtor chamado*
* **b) Em qual momento o destrutor é executado?** *Assim que a função main deixa de existir*
---
## 9) Rastreamento de Objetos (Tabela)
Analise o código abaixo:
```cpp
#include <iostream>
using namespace std;
class Conta {
private:
double saldo;
public:
Conta() {
saldo = 0;
}
void depositar(double valor) {
saldo += valor;
}
void sacar(double valor) {
saldo -= valor;
}
double getSaldo() {
return saldo;
}
};
int main() {
Conta c;
c.depositar(100);
c.depositar(50);
c.sacar(30);
c.depositar(20);
return 0;
}
```
| Linha executada | Operação | Valor do saldo |
| :--- | :--- | :---: |
| Criação do objeto | Inicialização | 0 |
| `c.depositar(100)` | 000 + 100 | 100 |
| `c.depositar(50)` | 100 + 50 | 150 |
| `c.sacar(30)` | 150 - 30 | 120 |
| `c.depositar(20)` | 120 + 20 | 140 |
---
## 10) Rastreamento com Dois Objetos
Analise:
Conta a;
Conta b;
```cpp
a.depositar(200);
b.depositar(500);
a.sacar(50);
b.depositar(100);
```
Complete:
| Etapa | Saldo de a | Saldo de b |
| :--- | :---: | :---: |
| Inicial | 0 | 0 |
| Após depositar em a | 200 | 0 |
| Após depositar em b | 200 | 500 |
| Após saque em a | 150 | 500 |
| Após depósito em b | 150 | 600 |
---
## 11) Conceitual - Herança
Explique:
* **a) O que é herança?** *Criação de classes baseadas em outras ja existentes*
* **b) O que é classe base (pai)?** *Uma classe que serve com base/molde para as classes filhas*
* **c) O que é classe derivada (filha)?** * Classes que herdan caracteristicas da classe pai*
* **d) Qual a vantagem da herança?** *Evita redundancia*
---
## 12) Identificação de Herança
Observe o código:
```cpp
class Animal {
public:
void comer() {
cout << "Comendo";
}
};
class Cachorro : public Animal {
};
```
Responda:
* **a) Qual é a classe pai?** *Animal*
* **b) Qual é a classe filha?** *Cachorro*
* **c) O objeto da classe Cachorro pode usar o método comer()?** *Sim, pois herda da classe pai*
* **d) Qual tipo de herança está sendo utilizada?** *Herança única*
---
## 13) Implementação
#### Crie:
* Classe pai:
* Funcionario
### Atributos:
* nome
* salario
### Métodos:
* mostrarDados()
### Classe filha:
* Gerente
### Novo atributo:
* bonus
### Método:
* calcularSalarioFinal()
```cpp
class Funcionario(){
    public:
        string nome;
        double salario;
    void mostrarDados(){ 
    }
};
class Gerente: public Funcionario{
    public:
        double bonus;
        void calcularSalarioFinal(){
    }
};
```
## 14) Análise de Código
#### Baseando-se no exemplo de ContaBancaria e ContaPoupanca.
Explique:
* **a) Por que o atributo saldo foi declarado como protected?** *Para seu valor ser exclusivo em classe*
* **b) Qual vantagem isso traz para as classes filhas?** *Terem todas atributos iguais sem ter que criar em cada uma mas mantendo seus valores unicos*
* **c) O método sacar() foi reaproveitado? Como?** *Sim. Foi criado uma vez e chamado quando precisou sem ter que ficar criando em cada classe nova*