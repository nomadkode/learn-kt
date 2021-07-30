#include <iostream>

using namespace std;

int main() {
  // assignment
  int a = 10;
  cout << "nilai awal dari a adalah " << a << endl;

  // assignment operator
  a += 3;
  cout << "ditambah 3 menjadi " << a << endl;
  a -= 3;
  cout << "dikurang 3 menjadi " << a << endl;
  a *= 3;
  cout << "dikali 3 menjadi " << a << endl;
  a /= 3;
  cout << "dibagi 3 menjadi " << a << endl;

  a %= 3;
  cout << "sisa baginya menjadi " << a << endl;

  // Increment & decrement
  int b = 5;
  int c = 5;
  int d = 5;
  int e = 5;

  // Postincrement & preincrement
  cout << b++ << endl;
  cout << b << endl;
  cout << ++c << endl;
  cout << c << endl;

  // Postdecrement & predecrement
  cout << d-- << endl;
  cout << d << endl;
  cout << --e << endl;
  cout << e << endl;

  cin.get();
  return 0;
}