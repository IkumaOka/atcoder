#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  // rep(i, n) cout << h[i] << endl;
  vector<int> dp(n);
  dp[0] = 0;
  dp[1] = abs(h[1] - h[0]);
  rep(i, n){
    if (dp[i+1] > (dp[i] + abs(h[i+1] - h[i]))){
      dp[i+1] = dp[i] + abs(h[i+1] - h[i]);
    }
    if(dp[i + 2], (dp[i] + abs(h[i+2] - h[i]))){
      dp[i + 2] = dp[i] + abs(h[i+2] - h[i]);
    }
  }
  cout << dp[n-1] << endl;
  return 0;
}