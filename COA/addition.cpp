#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int xor_logic(int a, int b) {
  if (a == b) {
    return 0;
  }
  return 1;
}

int main() {
  int diff;
  string str;
  int a, b, c = 0;
  cout << "Enter your binaries" << endl;
  cout << "a: ";
  cin >> a;
  cout << "b: ";
  cin >> b;

  // Extract individual bits from the numbers supplied
  int a_dig = 0;
  int b_dig = 0;
  int max_length = max(log10(a) + 1, log10(b) + 1);
  // int max_length = 4;

  int temp_a = a;
  int temp_b = b;
  // display each bits of a and b after adding them

  int t_a = a;
  int t_b = b;
  for (int i = 0; i < max_length; i++) {
    a_dig = t_a % 10;
    b_dig = t_b % 10;

    diff = xor_logic(xor_logic(a_dig, b_dig), c);
    str = std::to_string(diff) + str;
    c = (a_dig && b_dig) || (b_dig && c) || (c && a_dig);

    // cout << diff << endl;

    t_a = t_a / 10;
    t_b = t_b / 10;
  }
  cout << "Sum: " << str << endl;
  cout << "Carry: " << c << endl;

  return 0;
}
