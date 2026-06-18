#include <iostream>
using namespace std;

 void conversao(int s_t)
{
    int h, m, s;
    s = s_t % 60;
    m = (s_t %3600)/60;
    h = s_t/3600;
    cout << h << " " << m << " " << s << endl;
}

int main(){
    int s, c;
    cout << "Segundos " << endl;
    cin  >> s;
    conversao(s);
}