#include <iostream>
using namespace std;

// Write a function tocount number of set bits.Time complexity is 0(log(base2) n)
// int count_set_bits(int number) {
//   if(number == 0) return 0;

//   int count = 0;
//   while(number > 0) {
//     int remainder = number % 2;
//     if(remainder) count++;
//     number/=2;
//   }

//   return count;
// }

//Another efficient solution using 0(no of set bits) time complexity.
int count_set_bits(int number) {
  if(number == 0) return 0;

  int count = 0;
  while(number >  0) {
    number&=number-1;
    count++;
  } 

  return count;  
}


int main() {
  int count = count_set_bits(20);
  int count2 = count_set_bits(7);

  cout << count << endl;
  cout << count2 << endl;

  return 0;  
}