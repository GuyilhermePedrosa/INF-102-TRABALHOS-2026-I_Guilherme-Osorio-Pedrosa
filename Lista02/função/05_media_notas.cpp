#include <iostream>
using namespace std;

int Media(int n1, int n2, int n3){
    int media = (n1 + n2 + n3) / 3;
    return media;
}


int main(){
    int nota01, nota02, nota03, media;
    cout << "Nota 01: " << endl;
    cin >> nota01;
    cout << "Nota 02: " << endl;
    cin >> nota02;
    cout << "Nota 03: " << endl;
    cin >> nota03;

    media = Media(nota01, nota02, nota03);
    cout << "Media: " << media << endl;
}