// https://leetcode.com/problems/majority-element/

#include<iostream>
#include<unordered_map>
#include<cmath>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {
  unordered_map<int, int> my_map;
  int result = nums[0];
  for(int i = 0; i < nums.size(); i++) {
    if(my_map.find(nums[i]) == my_map.end())
      my_map[nums[i]] = 1;
    else {
      int temp = my_map[nums[i]];
      temp++;
      my_map[nums[i]] = temp;
      if(temp >= floor(nums.size()/2) && temp > my_map[result]) {

        result = nums[i];
      }

    }
  }
  return result;
}

int main() {
  vector<int> v = {8,8,7,7,7};
  cout<<majorityElement(v);
  return 0;
}
