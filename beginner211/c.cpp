#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  vector<vector<int>> dp(n+1 , vector<int>(9 , 0));
  rep(i, n+1) dp[i][0] = 1;
  string t = "chokudai";
  int mod = 1000000007;
  rep(i, n){
    rep(j, 8){
      if (t[j] != s[i]){
        dp[i+1][j+1] = dp[i][j+1];
      }
      else {
        dp[i+1][j+1] = (dp[i][j+1] + dp[i][j]) % mod;
      }
    }
  }
  cout << dp[n][8] << endl;
  return 0;
}