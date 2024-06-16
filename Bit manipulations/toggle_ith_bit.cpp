#include <iostream>
using namespace std;

//Write a function to toggle the ith bit of an integer.Bit indecing starts from 0.
int toggle_ith_bit(int number , int index) {
   return number ^ (1 << index); 
}

int main() {
  int ans = toggle_ith_bit(20,4);
  int ans2 = toggle_ith_bit(20,0);

  cout << ans << endl;
  cout << ans2 << endl;

  return 0;
}   