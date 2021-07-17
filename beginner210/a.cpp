#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int n, a, x, y, ans;
  cin >> n >> a >> x >> y;
  if (n < a){
    ans = n * x;
  }
  else {
    ans = x * a + y * (n - a);
  }

  cout << ans << endl;
  return 0;
}