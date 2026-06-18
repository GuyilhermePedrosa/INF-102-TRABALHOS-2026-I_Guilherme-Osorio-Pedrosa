#include <iostream>
using namespace std;

int main() {
    int num01;
    cout<< "Idade"<< endl;
    cin >> num01;

    if (num01 >= 16)
    {
        cout<< "Pode votar";
    }
        else if(num01 < 16) {
            cout<< "Não pode votar";
        }
    
    return 0;
}

