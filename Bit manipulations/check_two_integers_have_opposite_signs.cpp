#include <iostream>
using namespace std;

//Write  a function to check  whether two integers have opposite signs or not
bool have_opposite_signs(int num1 , int num2) {
    return (num1 ^ num2) < 0;
}

int main() {
  bool ans = have_opposite_signs(-100,12);
  bool ans2 = have_opposite_signs(-34,-56);

  cout << ans << endl;//true
  cout << ans2 << endl;//false

  return 0;
}