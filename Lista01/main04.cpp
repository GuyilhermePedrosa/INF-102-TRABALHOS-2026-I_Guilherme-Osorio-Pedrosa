#include <iostream>
using namespace std;

int main() {
    int num01;
    cout<< "Nota"<< endl;
    cin >> num01;

    if (num01 >= 6)
    {
        cout<< "Aprovado";
    }else if(num01 < 6) {
        cout<< "Reprovado";
    }    
    return 0;
}

