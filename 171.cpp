// https://leetcode.com/problems/excel-sheet-column-number/

#include<iostream>
#include<string>
#include<map>
#include<cmath>
using namespace std;

int titleToNumber(string s) {
  if(s.length() == 0)
    return 0;
  int c = 1;
  int sum = 0;
  int t = 0;
  for(int i = s.length() - 1; i >= 0; i--) {
    sum += pow(26, t) * ((int)(s[i] - 65 + 1));
    t++;
  }
  return sum;
}
int main() {
  string s = "BA";
  cout<<titleToNumber(s);

  return 0;
}
