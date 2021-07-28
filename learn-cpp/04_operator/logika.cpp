#include <iostream>

using namespace std;

int main() 
{
  int a = 3;
  int b = 2;

  bool hasil1, hasil2, hasil3;

  // not !
  hasil1 = not(a == 3);
  hasil1 = !(a == 3);
  // and &&
  hasil2 = (a == 3) and (b == 2);
  hasil2 = (a == 3) && (b == 2);
  // or ||
  hasil3 = (a == 3) or (b == 2); 
  hasil3 = (a == 3) || (b == 2); 

  cout << hasil1 << endl;
  cout << hasil2 << endl;
  cout << hasil3 << endl;

  cin.get();
  return 0;
}