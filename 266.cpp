//http://buttercola.blogspot.in/2015/08/leetcode-palindrome-permutation.html

#include<iostream>
#include<map>
#include<string>
using namespace std;
bool isPalindrome(string s) {
  if(s.length() <= 1)
    return true;
  register int count;
  map<char, int> my_map;
  for(int i = 0; i < s.length(); i++) {

    if(my_map.find(s[i]) == my_map.end())
      my_map[s[i]] = 1;
    else {
      count = my_map[s[i]] + 1;
      my_map[s[i]] = count;
    }
  }

  count = 0;
  map<char, int> :: iterator i;
  for(i = my_map.begin(); i != my_map.end(); i++) {
    if(i -> second % 2 != 0)
      count++;
  }

  if(s.length() % 2 == 0)
    return count == 0;
  else
    return count == 1;
}

int main() {
  string s = "carerac";
  cout<<isPalindrome(s)<<"\n";
}
