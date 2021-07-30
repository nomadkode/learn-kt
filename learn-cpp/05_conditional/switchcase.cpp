#include <iostream>

using namespace std;

int main(){
  int a;
  cout << "masukan angka = ";
  cin >> a;

  switch(a){
    case 1: cout << "a = 1" << endl;
    break;
    case 2: cout << "a = 2" << endl;
    break;
    case 3: cout << "a = 3" << endl;
    break;
    case 4: cout << "a = 4" << endl;
    break;
    case 5: cout << "a = 5" << endl;
    break;
    default: cout << "default" << endl;
  }

  cout << "akhir program" << endl;
  cin.get();
  return 0;
}