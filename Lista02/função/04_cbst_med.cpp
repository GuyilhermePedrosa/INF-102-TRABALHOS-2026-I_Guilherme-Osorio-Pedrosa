#include <iostream>
using namespace std;

float media(float cbmst, float dst){
    return dst / cbmst;
}


int main(){
    float cbmst, dst;

    cout << "combustivel gasto " << endl;
    cin >> cbmst;
    cout << " distancia " << endl;
    cin >> dst;

    cout << media(cbmst, dst) << endl;
}