//https://leetcode.com/problems/move-zeroes

#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
  vector<int>::iterator i;
  int count = 0;
  for(i = nums.begin(); i < nums.end(); i++) {

    if(*i != 0 ) {
      nums[count++] = *i;
    }
  }
  for(int x = count; x < nums.size(); x++)
    nums[x] = 0;
}

int main() {
  vector<int> v = {0, 1, 0, 3, 12};
  vector<int>::iterator i;
  moveZeroes(v);
  for(i = v.begin(); i < v.end(); i++) {
    cout<<*i<<" ";
  }
  return 0;
}
