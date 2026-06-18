#include <iostream>
using namespace std;


int calculo(int b, int h){
    int a = b * h;
    return a;
}
int main(){

    int b, h , a;

    cout << "Digite a base do retângulo: ";
    cin >> b;
    cout << "Digite a altura do retângulo: ";  
    cin >> h;
    a =calculo(b, h);

    cout << a << endl;
}
