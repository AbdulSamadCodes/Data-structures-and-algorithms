#include <iostream>
using namespace std;

//Write a function to unset the last set bit of a number
int unset_last_set_bit(int number) {
  return number & (number - 1);
}

int main() {
 int ans = unset_last_set_bit(40);
 cout << ans << endl;

 return 0; 
}