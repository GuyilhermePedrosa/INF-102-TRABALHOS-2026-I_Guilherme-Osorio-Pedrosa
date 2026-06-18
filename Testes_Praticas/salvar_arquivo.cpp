// Classe Funcionário + Gravação em Arquivos


#include <iostream>
#include <vector>
#include <fstream>
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
    Funcionario(string n, float s) {
        nome = n;
        salario = s;
    }
    string getNome() {
        return nome;
    }
    float getSalario() {
        return salario;
    }
    void mostrarDados() {
        cout << "Nome: " << nome << endl;
        cout << "Salario: R$ " << salario << endl;
        cout << "----------------------" << endl;
    }
};
int main() {
    vector<Funcionario> funcionarios;
    // Abrir arquivo para leitura
    ifstream arquivoLeitura("funcionarios.txt");
    string nome;
    float salario;
    // Carregar dados do arquivo
    while (arquivoLeitura >> nome >> salario) {
        funcionarios.push_back(
            Funcionario(nome, salario)
        );
    }
    arquivoLeitura.close();
    cout << "\nFUNCIONARIOS CARREGADOS DO ARQUIVO\n" << endl;
    for(int i = 0; i < funcionarios.size(); i++) {
        funcionarios[i].mostrarDados();
    }
    // Cadastro de novo funcionário
    string novoNome;
    float novoSalario;
    cout << "\nNovo funcionario" << endl;
    cout << "Nome: ";
    cin >> novoNome;
    cout << "Salario: ";
    cin >> novoSalario;
    funcionarios.push_back(
        Funcionario(novoNome, novoSalario)
    );
    // Salvar todos os funcionários
    ofstream arquivoGravacao("funcionarios.txt");
    for(int i = 0; i < funcionarios.size(); i++) {
        arquivoGravacao
            << funcionarios[i].getNome()
            << " "
            << funcionarios[i].getSalario()
            << endl;
    }
    arquivoGravacao.close();
    cout << "\nDados salvos com sucesso!" << endl;
    return 0;
}
