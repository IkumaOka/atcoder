#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int factorial(int num){
  int a = 1;
  for(int i=1; i < (num+1)){
    a *= num;
  }
  return a;
}


int main() { 
  int p;
  int ans = 0;
  cin >> p;
  
  cout << ans << endl;
  return 0;
}