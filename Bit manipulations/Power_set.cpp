#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//Q:You are given a list of elements.Your task is to return the powerset.

//function to genearte binary representation 
string binary_val(int decimal_no,int pad_length) {
  string ans = "";

  while(decimal_no > 0) {
    int remainder = decimal_no % 2;
    ans = char('0' + remainder) + ans;
    decimal_no/=2;
  }

  while(ans.length() < pad_length) ans = '0' + ans;
  return ans;
}

//function to generate  subsets
string* generate_power_set(int *arr, int array_length,int total_subsets)   {
  string *subsets_list = new string[total_subsets]; 
  for(int i = 0;i < total_subsets;i++) {
     string binary = binary_val(i,array_length);
     cout << binary << endl;

     string subset = "{";
     for(int j = 0 ; j < array_length ; j++) {
       if(binary[j] == '1') subset+=char('0' + arr[j]);
     }
     subset+="}";
     subsets_list[i] = subset;  
  }
   
  return subsets_list;
}

int main() {
  int array[3] = {1,2,3};
  int array_length = sizeof(array) / sizeof(array[0]);
  int total_subsets = (int)pow(2,(int)array_length);

  string *result = new string[total_subsets];
  result = generate_power_set(array,array_length,total_subsets);
  
  for(int i = 0 ; i < total_subsets ;i++) cout << result[i] << endl;

  delete[] result;
  return 0;  
}