#include <iostream>
using namespace std;

float calculo(float h, float v){
 return (h*v);
}


int main(){
    float h, v, t;
    cout << "Horas " << endl;
    cin>> h;
    cout << "Valor " << endl;
    cin>> v;
    t = calculo(h, v);
    cout << t << endl;
}