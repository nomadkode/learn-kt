#include <iostream>
#include <limits>

using namespace std;

int main()
{
  // bilangan bulat
  int a = 5; // 4-bytes
  unsigned int b = 6;
  long int c = 7; // 8-bytes
  short int d = 8; // 2-bytes

  // bilangan desimal
  float e = 1.0;
  double f = 2.5;
  long double g = 3.14;

  // character
  char h = 'a';
  unsigned char i = 'b';

  // boolean
  bool j = true;

  cout << a << endl;
  cout << sizeof(a) << " byte" << endl;
  cout << numeric_limits<int>::max() << endl;
  cout << numeric_limits<int>::min() << endl;
  
  cin.get();
  return 0;
}