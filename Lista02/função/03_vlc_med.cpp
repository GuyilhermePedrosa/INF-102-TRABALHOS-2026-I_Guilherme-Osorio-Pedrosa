#include <iostream>
using namespace std;

float media(float tmp, float dst){
    return dst / tmp;
}


int main(){
    float tmp, dst;

    cout << "Tempo gasto " << endl;
    cin >> tmp;
    cout << " distancia " << endl;
    cin >> dst;

    cout << media(tmp, dst) << endl;
}