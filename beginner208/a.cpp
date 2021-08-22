#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int a, b;
  string ans = "No";
  cin >> a >> b;
  if (a*6 >= b && a <= b){
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}