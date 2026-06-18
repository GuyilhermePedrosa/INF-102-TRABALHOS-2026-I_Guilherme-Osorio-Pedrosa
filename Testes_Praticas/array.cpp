#include <iostream>
#include <string>

using namespace std;

class Funcionario {
private:
    string nome;
    float salario;

public:
    Funcionario() {
        nome = "";
        salario = 0;
    }

    Funcionario(string n, float sal) {
        nome = n;
        salario = sal;
    }

    void imprimir() {
        cout << "Nome: " << nome << endl;
        cout << "Salario: R$ " << salario << endl;
    }
};

int main() {
    Funcionario f[100]; 

    int opcao;
    int qtd = 0;

    do {
        cout << "1 - Cadastrar funcionario" << endl;
        cout << "2 - Mostrar funcionarios" << endl;
        cout << "3 - Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;

        switch (opcao) {

        case 1: {
            string nome;
            float salario;

            cin.ignore();

            cout << "Digite o nome: ";
            getline(cin, nome);

            cout << "Digite o salario: ";
            cin >> salario;

            f[qtd] = Funcionario(nome, salario);
            qtd++;

            cout << "Funcionario cadastrado!" << endl;
            break;
        }

        case 2: {
            cout << "\n=== FUNCIONARIOS ===" << endl;

            for (int i = 0; i < qtd; i++) {
                cout << "\nFuncionario " << i + 1 << endl;
                f[i].imprimir();
            }

            break;
        }

        case 3:
            cout << "Saindo..." << endl;
            break;

        default:
            cout << "Opcao invalida!" << endl;
        }

    } while (opcao != 3);

    return 0;
}
