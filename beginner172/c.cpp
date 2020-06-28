#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int n, m, k;
  cin >> n >> m >> k;
  int count_book = 0;
  queue<ll> a;
  queue<ll> b;
  rep(i, n){
    int p;
    cin >> p;
    a.push(p);
  }
  rep(i, m){
    int v;
    cin >> v;
    b.push(v);
  }
  while (!a.empty() || !b.empty()){
    if (a.empty()){
      k -= b.front();
      if(k < 0){
        k += b.front();
        break;
      }
      b.pop();
      count_book += 1;
    } else if(b.empty()){
      k -= a.front();
      if(k < 0){
        k += a.front();
        break;
      }
      a.pop();
      count_book += 1;
    } else{
        if(a.front() < b.front()){
        k -= a.front();
        if(k < 0){
          k += a.front();
          break;
        }
        a.pop();
        count_book += 1;
      }else if(a.front() > b.front()){
        k -= b.front();
        if(k < 0){
          k += b.front();
          break;
        }
        b.pop();
        count_book += 1;
      }
    }
  }
  cout << count_book << endl;
  return 0;
}