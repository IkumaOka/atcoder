#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  ll n;
  cin >> n;
  int ans = 0;
  double a = log2((long double)n);
  for (int i=1; i < 10000; ++i){
    if (a >= i){
      ans = i;
    } else {
      break;
    }
  }
  cout << ans << endl;
  cout << floor(log2((long double)n)) << endl;
  return 0;
}