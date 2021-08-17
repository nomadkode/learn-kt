#include <iostream>

using namespace std;

int main() {
  // berlaku untuk while, do while & for loop
  for (int i = 0; i <= 10; i++) {
    if(i == 5) {
      continue;
      // break;
    }
    cout << i << endl;
  }

  int j = 0;
  while(j <= 10) {
    j++;
    if(j == 5) {
      continue;
      // break;
    }
    cout << j << endl;
  }

  cout << "akhirnya" << endl;
  cin.get();
  return 0;
}