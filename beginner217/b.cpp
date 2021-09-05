#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  string ans = "";
  bool res = true;
  vector<string> vec1 = {s1, s2, s3};
  vector<string> vec2 = {"ABC", "ARC", "AGC", "AHC"};
  rep(i,3){
    rep(j, 4){
      if(vec1[i] == vec2[j]){

        continue;
      } else {
        ans = vec1[i];
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}