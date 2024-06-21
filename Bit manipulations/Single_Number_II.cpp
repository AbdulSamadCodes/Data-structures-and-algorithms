#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

// Q:You are given an array and its length n  where every elemnt occurss thrice except one element.Return the element which occurs only once.

// solution using map structure
int single_number_with_map(int *arr,int n) {
  map<int,int> frequency_map;

  for(int i = 0; i < n ;i++) {
    if(frequency_map[arr[i]]) frequency_map[arr[i]]+=1;
    else frequency_map[arr[i]] = 1;
  }

  for(auto it = frequency_map.begin(); it != frequency_map.end(); ++it) {
    if(it -> second == 1) return it->first;
  }

  return -1;
}

// solution using bitcount
int single_number_with_bit_count(int *arr,int n) {
  int ans = 0;

  // looping over all 32 bits
  for(int i = 0; i < 31 ;i++) {
    int count = 0;

    for(int j = 0; j < n;j++) {
      if(arr[j] & (1 << i)) count++;
    }
    if(count % 3 == 1) ans = ans | (1 << i);
  }

  return ans;
}

// solution using sorting
int single_number_with_sorting(int *arr, int n) {
  sort(arr,arr + n);

  //checking every third element whether its previous elemnt is different or not
  for(int i = 1; i < n; i+=3) {
    if(arr[i - 1] != arr[i]) return arr[i - 1];
  }

  return arr[n - 1];
}

// solution using buckets
int single_number_with_buckets(int *arr,int n) {
  int ones = 0;
  int twos = 0;

  for(int i = 0; i < n; i++) {
    ones = (ones ^ arr[i]) & ~twos;
    twos = (twos ^ arr[i]) & ~ones;
  }

  return ones;
}

int main() {
  int arr[7] = {1, 1, 1, 61, 56, 56, 56};
  int length = sizeof(arr) / sizeof(arr[0]);

  int single_number = single_number_with_map(arr,length);
  cout << "Single number with map: " <<  single_number << endl;

  int single_number = single_number_with_bit_count(arr,length);
  cout << "Single number with bitcount: " << single_number << endl;

   int single_number = single_number_with_sorting(arr,length);
   cout << "Single number with bitcount: " << single_number << endl;

  int single_number = single_number_with_buckets(arr,length);
  cout << "Single number with buckets solution is: " << single_number << endl; 

  return 0;
}
