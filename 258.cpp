//https://leetcode.com/problems/add-digits/
//digital root

#include<iostream>

int addDigits(int num) {
    if(num == 0)
      return 0;
    if(num % 9 == 0)
      return 9;
    else return num % 9;
}

int main() {
  std::cout<<addDigits(38)<<std::endl;
}
