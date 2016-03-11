//https://tonycao.gitbooks.io/leetcode-locked/content/LeetCode%20Locked/c1.4.html

#include<vector>
#include<climits>
#include<cmath>
#include<string>
#include<iostream>
//#include<algoritms>
using namespace std;
  int shortestDistance(vector<string>& words, string word1, string word2) {
    register int dist = INT_MAX, i, first = -1, second = -1;
    for(i = 0; i < words.size(); i++) {
      if(words[i].compare(word1) == 0)
        first = i;
      else if(words[i].compare(word2) == 0)
        second = i;
      if(first != -1 && second != -1)
        dist = min(dist, abs(first - second));
    }
    return dist;
  }

int main() {
  vector<string> s = {"practice", "makes", "perfect", "coding", "makes"};
  cout<<shortestDistance(s, "practice", "coding")<<endl;
  return 0;
}
