#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int n, ans;
  cin >> n;
  if (1 <= n && n <= 125){
    ans = 4;
  } else if(126 <= n && n <= 211){
    ans = 6;
  } else if (212 <= n && n <= 214){
    ans = 8;
  }
  cout << ans << endl;
  return 0;
}