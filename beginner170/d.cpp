#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

vector<int> Eratosthenes( const int N )
{
  vector<bool> is_prime( N + 1 );
  for( int i = 0; i <= N; i++ )
  {
      is_prime[ i ] = true;
  }
  vector<int> P;
  for( int i = 2; i <= N; i++ )
  {
      if( is_prime[ i ] )
      {
          for( int j = 2 * i; j <= N; j += i )
          {
              is_prime[ j ] = false;
          }
          P.emplace_back( i );
      }
  }
  return P;
}

int main() { 
  vector<int> a(5);
  int ans;
  rep(i, 5){cin >> a.at(i);}
  rep(i, 5){
    if (a[i] == 0){
      ans = i+1;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}