
#include <iostream>
using namespace std;

//You will be given two integers start and goal.Your  task is to write a function to give minumum bits flip required to flip start to goal.

int count_minimum_bit_flips(int start ,int goal) {
  int ans = start ^ goal;
  int count = 0;
  
  while(ans != 0) {
    ans&=ans - 1;
    count++;
  }

  return count;
}


int main() {
  int  start = 10;
  int goal = 7;

  cout << count_minimum_bit_flips(start,goal) << endl;  
  
  return 0;  
}