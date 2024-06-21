#include <iostream>
using namespace std;

// Q:Find  XOR of a given range from 1 to N.
int XOR_in_a_range(int range) {
  if(range % 4 == 1) return 1;
  else if(range % 4 == 2) return range + 1;
  else if(range % 4 == 3) return  0;
  else  return range;
}

// Q:Find XOR  from in a range from L to R where L is lower bound and R is upper bound.
int find_XOR(int L , int R) {
  return XOR_in_a_range(L - 1) ^ XOR_in_a_range(R);
}

int main() {
  int range_XOR = XOR_in_a_range(7);
  cout << range_XOR << endl;

  int XOR = find_XOR(5,7);
  cout << XOR << endl;

  return 0;
}