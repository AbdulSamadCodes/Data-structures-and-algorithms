#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binary_to_decimal(string binary_value) {
   int last_index = binary_value.length() - 1;
   int power = 0;
   int ans = 0;
  
   while(last_index >= 0) {
    if(binary_value[last_index--] == '1') 
      ans+=(int)pow(2.00,double(power));
      
    power++;
   }
   
   return ans;
}

int main() {
  string binary_value = "1101";
  int decimal = binary_to_decimal(binary_value);
  cout << decimal;
}
