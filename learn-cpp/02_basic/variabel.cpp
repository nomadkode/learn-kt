#include <iostream>

using namespace std;

int main()
{
  // cara hardcode
  int a; // deklarasi
  a = 5; // inisialisasi
  cout << a << endl;

  // cara input nilai dr console
  int b;
  cout << "masukan nilai: ";
  cin >> b;
  cout << "nilai yang anda masukan: ";
  cout << b << endl;

  cin.get();
  return 0;
}