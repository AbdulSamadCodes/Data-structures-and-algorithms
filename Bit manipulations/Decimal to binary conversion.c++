#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Write a function to convert a decimal number into its binary equivalent form
string decimal_to_binary(int decimal_no) {
  string result = "";

  while(decimal_no > 0) {
    char bit = decimal_no % 2;
    result=to_string(bit) + result;
    decimal_no/=2;
  }

  return result;
}


int main() {
  int decimal_no = 13;  
  string ans = decimal_to_binary(decimal_no);
  cout << "The binary equivalent of "<< decimal_no << " is "<< ans << endl;
}