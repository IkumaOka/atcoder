#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<string> s(n), t(n);
  string ans = "No";
  rep(i, n) cin >> s[i] >> t[i];
  rep(i, n){
    rep(j, i){
      if(s[i] == s[j] && t[i] == t[j]) ans = "Yes";
    }
  }
  cout << ans << endl;

  return 0;
}