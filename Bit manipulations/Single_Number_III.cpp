#include <iostream>
#include <map>
using namespace std;

Q:You are given where every number occurss twice except two distinct numbers which occurss only once.Return these numbers.

// solution using map structure
int* single_numbers_with_map(int *arr,int n) {
  int *ans = new int[2];
  int index = 0;
  map<int,int> frequecy_map; 

  for(int i = 0; i < n; i++) {
    if(frequecy_map[arr[i]]) frequecy_map[arr[i]]+=1;
    else frequecy_map[arr[i]] = 1;
  }

  for(auto it=frequecy_map.begin(); it != frequecy_map.end(); ++it) {
    if(it->second == 1) ans[index++] = it->first; 
  }

  return ans;
}

// solution using buckets
int *single_numbers_with_buckets(int *arr,int n) {
  int bucket_1 = 0;
  int bucket_2 = 0;
  
  int *ans = new int[2];
  int index = 0;
  for(int i = 0; i < n; i++) {
    if(arr[i] & (1 << 1)) bucket_1^=arr[i];
    else bucket_2^=arr[i];
  }

  ans[index++] = bucket_1;
  ans[index++] = bucket_2;

  return ans; 
}

int main() {
  int array[8] = {3,3,8,8,4,4,23,45}; 
  int length = sizeof(array) / sizeof(array[0]);

  int *ans = new int[2];
  int *ans2 = new int[2];
  ans = single_numbers_with_map(array,length);
  ans2 = single_numbers_with_buckets(array,length); 

  for(int i = 0; i < 2; i++) cout << ans[i] << endl;
  for(int i = 0; i < 2; i++) cout << ans2[i] << endl;

  delete[] ans;
  return 0;
}