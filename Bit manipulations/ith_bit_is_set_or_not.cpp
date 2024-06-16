#include <iostream>
using namespace std;

//Q:Write  a function to check if the ith bit is set or not.Bit indexes start from 0.

bool is_ith_set(int number , int index) {
  return ((number >> index) & 1) == 1;    
}

int main() {
   int number  = 13;
   bool isSet = is_ith_set(number,2);
   
   cout << isSet;
   return 0;
}