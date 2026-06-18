#include <iostream>
using namespace std;

float conversao(float c)
{
    float f = (c * 9/5) + 32;
    return f;
}


int main(){
    float c, f;
    cout << "Temeperatura em C ";
    cin >> c;
    f = conversao(c);
    cout << f << endl;
}