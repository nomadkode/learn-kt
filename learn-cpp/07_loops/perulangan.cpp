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
  } while(b <= 5);

  // for loop 1
  for(int count = 1; count <= 10; count++){
    cout << count << endl;
  }

  // for loop 2
  for(int i = 1; i <= 10; i += 2){
    cout << i << endl;
  }

  // for loop 3
  for(int j = 1; j >= -10; j--){
    cout << j << endl;
  }

  // for loop 4
  int total = 0;
  for(int c = 1; c <= 10; total += c, c++){
    cout << c << " || " << total << endl;
  }

  cout << "selesai" << endl;
  cin.get();
  return 0;
}