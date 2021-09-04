#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  string s;
  cin >> s;
  int n = s.size();
  int y = s[n-1] - '0';
  s = s.substr(0,n-2);
  if(y <= 2){
    s+='-';
  }else if(y >= 7){
        s+='+';
  }
  cout << s << endl;
  return 0;
}