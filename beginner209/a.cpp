#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int a, b;
  int ans = 0;
  cin >> a >> b;
  if (b >= a){
    ans = b - a + 1;
  }
  cout << ans << endl;
  return 0;
}