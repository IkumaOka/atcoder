#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int n;
  string s;
  string ans;
  cin >> n;
  cin >> s;
  rep(i, n){
    if(s[i] == '1'){
      if ((i+1) % 2 == 0){
        ans = "Aoki";
        break;
      }
      else{
        ans = "Takahashi";
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}