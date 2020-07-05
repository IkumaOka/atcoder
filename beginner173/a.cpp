#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int n, ans;
  cin >> n;
  ans = n % 1000;
  if (ans != 0){
    ans = 1000 - ans;
  }
  cout << ans << endl;
  return 0;
}