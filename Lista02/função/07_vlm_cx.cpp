#include <iostream>
using namespace std;

int volume(int c, int l, int h){
    return (c*l*h);
}
int main(){
int c, l, h, v;
cout << ("Comprimento ");
cin >> c;

cout << ("Largura ");
cin >> l;

cout << ("Altura ");
cin >> h;

v = volume(c,l,h);

cout << v<< endl;
}