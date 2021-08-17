#include <iostream>

using namespace std;

int main() {
  // while
  int a = 5;
  while(a <= 10) {
    cout << "hore ";
    cout << a << endl;
    a += 1;
  }

  // do while
  int b = 1;
  do {
    cout << "horee ";
    cout << b << endl;
    b++;
  } while (b <= 5);

  cout << "selesai" << endl;
  cin.get();
  return 0;
}