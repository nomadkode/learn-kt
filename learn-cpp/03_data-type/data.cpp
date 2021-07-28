#include <iostream>
#include <limits>

using namespace std;

int main()
{
  // bilangan bulat
  int a = 5; // 4-bytes
  unsigned int h = 8;
  long b = 6; // 8-bytes
  short c = 7; // 2-bytes

  // bilangan desimal
  float d = 1.0;
  double e = 2.5;

  // character
  char f = 'a';
  unsigned char i = 'b';

  // boolean
  bool g = true;

  cout << a << endl;
  cout << sizeof(a) << " byte" << endl;
  cout << numeric_limits<int>::max() << endl;
  cout << numeric_limits<int>::min() << endl;
  
  cin.get();
  return 0;
}