#include <iostream>
using namespace std;

//Q:You will be given an array and size of the array n where every number occurss twice except a single number.Return that number.

int single_number(int *arr,int n) {
  int XOR = 0;
  
  for(int i = 0;i < n ; i++) XOR^=arr[i];
  return XOR;
}

int main() {
  int array[7] = {4,5,7,7,6,6,4};
  int length = sizeof(array) / sizeof(array[0]);

  int ans = single_number(array,length);
  cout << ans << endl;

  return 0;
}