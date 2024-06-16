#include <iostream>
using namespace std;

//Write a function to set the ith bit of a number.Bit indexes start from 0.

int set_ith_bit(int number , int index) {
  return number | (1 << index);
}

int main() {
  int ans = set_ith_bit(13,1);
  cout << ans << endl;

  cout << (-100 ^ 20);

  return 0;
}