#include <iostream>
using namespace std;

int main() {

    int num01, num02, x = 1;

 
   cout<< "Primeiro numero " << endl;
     cin >> num01;
       
   cout<< "Segundo numero"<< endl;
     cin >> num02;
    if (num01 > num02)
    {
        cout<< "O numero maior é: " << num01;
    }else if(num01 < num02)
    {
        cout<< "O numero maior é: " << num02;
    }else{
        cout<< "Os numeros são iguais";
    }
    
    
    return 0;
}

