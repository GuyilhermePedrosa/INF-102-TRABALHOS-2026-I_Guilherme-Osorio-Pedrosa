#include <iostream>
using namespace std;

int data(int d, int a){
    return (a - d);
}


int main(){
    int d, a, i;
    cout << "Ano da nascimento" << endl;
    cin >> d;
    cout << "Ano atual" << endl;
    cin >> a;
    i = data(d, a);
    cout << i << endl;
}