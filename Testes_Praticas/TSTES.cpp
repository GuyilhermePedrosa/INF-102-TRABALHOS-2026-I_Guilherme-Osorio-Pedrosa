#include <iostream>
using namespace std;

class ContaBancaria {
private:
    string titular;
    string banco;
    int numero;
    float saldo;

public:
    // Construtor - Modo 1
    ContaBancaria(string nome, string nomeBanco, int numConta, float saldoInicial) {
        titular = nome;
        banco = nomeBanco;
        numero = numConta;
        saldo = saldoInicial;
        cout << "Conta criada para " << titular << endl;
    }
    
    // Construtor - Modo 2
    ContaBancaria() {
        titular = "";
        banco = "";
        numero = 0;
        saldo = 0.0f;
        cout << "Conta padrão criada." << endl;
    }

    //  Destrutor
    ~ContaBancaria() {
        cout << "Conta de " << titular << " encerrada." << endl;
    }

    // Getters
    string getTitular() {
        return titular;
    }

    // EXERCICIO 1 - Fazer getBanco e getNumero

    string getBanco(){
        return banco;
    }

    int getNumero(){
        return numero;

    }

    float getSaldo() {
        return saldo;
    }

    // Setters
    void setTitular(string nome) {
        titular = nome;
    }

    // EXERCICIO 2 - Fazer setBanco e setNumero

    void setBanco(string novoBanco){
        banco = novoBanco;
    }

    void setNumero(int novoNumero){
        if (novoNumero > 0){
            numero = novoNumero;
        } else{
            cout << "ERROR";
        }
    }


    void setSaldo(float novoSaldo) {
        if (novoSaldo >= 0) {
            saldo = novoSaldo;
        } else {
            cout << "Saldo inválido!" << endl;
        }
    }

    // Métodos públicos
    
    // EXERCICIO 3 - Fazer depositar

    void sacar(float valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
        } else {
            cout << "Saldo insuficiente ou valor inválido!" << endl;
        }
    }

    void depositar(float deposito){
        if (deposito >= 0){
            saldo += deposito;
            cout << "DEP0SITOU" << endl;
        }else{
            cout << "VALOR INVALIDO" << endl;
        }
    }

    void imprimeConta() {
        cout << "Titular: " << titular << endl;
        cout << "Banco: " << banco << endl;
        cout << "Numero da conta: " << numero << endl;
        cout << "Saldo: R$ " << saldo << endl;
    }

    void acrescentaRendimento(float taxaPercentual) {
        if (taxaPercentual > 0) {
            saldo += saldo * (taxaPercentual / 100.0f);
        } else {
            cout << "Taxa de rendimento inválida!" << endl;
        }
    }
    // EXERCICIO 4 - Fazer acrescentaRendimento
};

int main() {
    //  Criando 5 contas
    ContaBancaria conta1("Ana", "Banco do Brasil", 1001, 1500.0f);
    ContaBancaria conta2("Carlos", "Caixa", 1002, 2000.0f);
    ContaBancaria conta3("Caio" , "Inter" , 6584, 6526.0f);
    ContaBancaria conta4("Eduardo" , "Nubank" , 1300, 7516.0f);
    ContaBancaria conta5("Felipe" , "Bradesco" , 1660, 6169.0f);
    
    // EXERCICIO 5 - Acrescente mais 3 contas usando o construtor 1

    

    ContaBancaria conta6;

    conta6.setTitular("Lucas");
    conta6.setBanco("Pan");
    conta6.setNumero(1006);
    conta6.setSaldo(800.0f);

    ContaBancaria conta7;
    conta7.setTitular("Henrique");
    conta7.setBanco("PicPay");
    conta7.setNumero(1100);
    conta7.setSaldo(6582);

    // EXERCICIO 6 - Acrescente mais 2 contas usando o construtor 2

    cout << "\n--- Operações ---\n" << endl;

    // Testando operações
    conta1.depositar(500.0f);
    conta2.sacar(3250.0f);
    conta3.depositar(2000);
    conta4.acrescentaRendimento(10);
    
     // EXERCICIO 7 - Acresente mais operacoes com sacar, depositar e acrescentaRendimento

    cout << "\n--- Saldos Atualizados ---\n" << endl;

    //  Exibindo dados
    conta1.imprimeConta();
    cout << endl;

    conta2.imprimeConta();
    cout << endl;
    
    conta3.imprimeConta();
    cout << endl;

    conta4.imprimeConta();
    cout << endl;

    conta5.imprimeConta();
    cout << endl;

    conta6.imprimeConta();
    cout << endl;

    conta7.imprimeConta();
    cout << endl;
   
    // EXERCICIO 8 - Imprima todos as contas criadas
    
    return 0;
}