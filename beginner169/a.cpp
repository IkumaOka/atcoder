#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int a[1000000];
  ll s = 1;
  rep(i, n){cin >> a[i];}
  rep(i, n){
    s *= a[i];
    if(s => 10**18){
      s = -1;
      break;
    }
  }
  cout << s << endl;
  return 0;
}