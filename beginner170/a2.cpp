#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
 
int main() { 
  int a[4];
  int ans;
  rep(i, 5){cin >> a[i];}
  rep(i, 5){
    if (a[i] == 0){
      ans = i+1;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}