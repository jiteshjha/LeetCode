//http://buttercola.blogspot.in/2015/10/leetcode-flip-game.html
#include<iostream>
#include<string>
#include<set>
using namespace std;

set<string> flipGame(string s) {
  register int i;
  set<string> myset;
  string temp;
  for(i = 0; i < s.length() - 1; i++) {
    if(s[i] == '+' && s[i+1] == '+') {
      temp = s.substr(0, i);
      temp = temp + "--";
      temp += s.substr(i + 2);
      myset.insert(temp);
    }
  }
  return myset;
}

int main() {
  string s = "++++";
  set<string> m = flipGame(s);
  set<string>::iterator i;
  for(i = m.begin(); i != m.end(); i++)
    cout<<*i<<endl;
  return 0;
}
