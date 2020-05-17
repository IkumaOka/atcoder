#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  string s, ans;
  int k, l;
  cin >> k;
  cin >> s;
  ans = s;
  l = s.length();
  if (l > k) {
    ans = s.substr(0, k) + "...";
  }
  cout << ans << endl;
  return 0;
}