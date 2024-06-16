#include <iostream>
using namespace std;

//Write a function to check whether the given integer is a power of 2.
bool is_power_of_2(int number) {
  if(number == 0) return false;
     
  return (number & number - 1) == 0;
}

int main() {
  bool ans= is_power_of_2(512);
  bool ans2 = is_power_of_2(34);

  cout << ans <<  endl;
  cout << ans2 << endl;

  return 0; 
}