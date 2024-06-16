#include <iostream>
using namespace std;

//Q:Write a function to swap two numbers without using temp variable

int* swap(int a , int b) {
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

 int* ans = new int[2];
 ans[0] = a;
 ans[1] = b;
 
 return ans;
}

int main() {
  int x = 34;
  int y = 78;

  int* result = swap(x,y);
  cout << "Values after swapping are: x = " << result[0] << " and y = " << result[1];

  //deleting the dynamically alllocated array
  delete result;
  return 0;
}