#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  if (num > 0){
    cout<<("Positivo");

  }else if(num < 0){
   cout<<("Negativo");
  }else{
  cout<< ("Zero");
  }
    return 0;
}

