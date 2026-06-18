#include <iostream>
using namespace std;

void conversao(float m){
float c, mm;
c = m*100;
mm = m*1000;
cout << c << " " << mm << endl;
}


int main()
{
    float m;
    cout << "Metros" << endl;
    cin  >> m;
    conversao(m);
}