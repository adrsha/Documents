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

int right_shift(int a) {
  int temp = a;
  temp = temp / 2;
  return temp;
}

int get_size(int a) { return log10(a) + 1; }

class AddSub {
public:
  int diff = 0, sum = 0;
  int carry = 0, borrow = 0;
  string strS, strD;
  AddSub(int a, int b, int c = 0) {
    int max_length = max(get_size(a), get_size(b));
    // Extract individual bits from the numbers supplied
    int a_dig = 0;
    int b_dig = 0;
    int carry = c;
    int borrow = c;
    int temp_a = a;
    int temp_b = b;
    // display each bits of a and b after adding them
    int t_a = a;
    int t_b = b;
    for (int i = 0; i < max_length; i++) {
      a_dig = t_a % 10;
      b_dig = t_b % 10;
      sum = xor_logic(xor_logic(a_dig, b_dig), carry);
      strS = std::to_string(sum) + strS;
      carry = (a_dig && b_dig) || (b_dig && carry) || (carry && a_dig);
      diff = xor_logic(xor_logic(a_dig, b_dig), borrow);
      strD = std::to_string(diff) + strD;
      borrow = (!a_dig && b_dig) || (b_dig && borrow) || (borrow && !a_dig);
      t_a = t_a / 10;
      t_b = t_b / 10;
    }
  }
  int get_sum() { return sum; }
  int get_diff() { return diff; }
  int get_carry() { return carry; }
  int get_borrow() { return borrow; }
  string get_strS() { return strS; }
  string get_strD() { return strD; }
};

using namespace std;

int main() {
  cout << "Enter two numbers to multiply" << endl;
  int a, b;
  cin >> a >> b;
  int Q = b;
  int q1 = 0;
  int q0 = Q % 10;
  int count = get_size(Q);

  int A = 0, testvar;
  while (count > 0) {
    AddSub add_sub(A, b);
    if (q0 == 1 && q1 == 0) {
      A = add_sub.get_sum();
    } else if (q0 == 0 && q1 == 1) {
      A = add_sub.get_diff();
    }
    testvar = A >> get_size(A);
    if (testvar == 1) {
      int sizeofA = get_size(A);
      A = (A >> 1) + (1 << sizeofA);
      Q = (Q >> 1) + (1 << sizeofA);
    }
    count--;
  }

  cout << A << endl;

  return 0;
}
