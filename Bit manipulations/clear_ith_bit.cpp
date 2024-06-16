#include <iostream>
using namespace std;

//Write a function to clear the ith bit of a number.Bit indexes start from 0.
int clear_ith_bit(int number , int index) {
    return number & (~(1 << index));
} 


int main() {
  int ans = clear_ith_bit(20,2);
  int ans2 = clear_ith_bit(16,2);
  
  cout << ans << endl;
  cout << ans2 << endl;

  return 0;
}