// https://leetcode.com/problems/longest-substring-without-repeating-characters/
// dynamic programming
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s) {
        if(s.empty())
          return 0;
        int max = 1, curr = 1, prev;
        unordered_map<char, int> my_map;
        my_map[s[0]] = 0;
        int len = s.length();
        for(int i = 1; i < len; i++) {
          unordered_map<char, int>::const_iterator got = my_map.find(s[i]);

          if(got == my_map.end() || i - curr > my_map[s[i]]) {
            curr++;
          }
          else {
            if(curr > max)
              max = curr;
            curr = i - my_map[s[i]];
          }
          my_map[s[i]] = i;
        }
        if(curr > max) max = curr;
        return max;
}

int main() {
    string s = "dvdf";
    cout<<lengthOfLongestSubstring(s)<<"\n";
    return 0;
}
