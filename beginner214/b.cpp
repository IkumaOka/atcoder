#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int s, t;
  int ans = 0;
  cin >> s >> t;
  rep(a, s+1){
    rep(b, s+1){
      rep(c, s+1){
        if(a+b+c <= s && a*b*c <= t){
          ans += 1;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}