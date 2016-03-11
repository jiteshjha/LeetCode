// https://leetcode.com/problems/contains-duplicate/
#include<vector>
#include<unordered_set>
#include<iostream>
using namespace std;
bool containsDuplicate(vector<int> &nums) {
  unordered_set<int> my_set;
  for(int i = 0; i < nums.size(); i++) {
    if(my_set.find(nums[i]) != my_set.end())
      return true;
    my_set.insert(nums[i]);
  }

  return false;
}

int main() {
  vector<int> v = {};
  cout<<containsDuplicate(v)<<endl;

  return 0;
}
