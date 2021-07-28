#include <iostream>

using namespace std;

int main()
{
  float a = 6;
  int b = 4;
  float hasil;

  // operator matematika
  hasil = a + b;
  cout << a << " + " << b << " = " << hasil << endl;

  hasil = a - b;
  cout << a << " - " << b << " = " << hasil << endl;

  hasil = a * b;
  cout << a << " x " << b << " = " << hasil << endl;

  hasil = a / b;
  cout << a << " / " << b << " = " << hasil << endl;

  // modulus tidak bisa untuk operator binary (float & int) 
  // hasil = a % b;
  // cout << a << " % " << b << " = " << hasil << endl;

  // operator urutan eksekusi
  hasil = a + b * a;
  cout << hasil << endl;
  hasil = (a + b) * a;
  cout << hasil << endl;

  cin.get();
  return 0;
}