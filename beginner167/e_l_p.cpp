#include <iostream>
using namespace std;

int main() {
  long A, B, C, K;
  long ans = 0;
  cin >> A >> B >> C >> K;
  // AがKと同じか大きい場合
  if (A >= K){
    ans = K;
  }
  if (A < K) {
    long margin = K - A;
    // K - AがBよりも小さい
    if (margin <= B) {
      ans = A;
    } else {
      long m_margin = K - A - B;
      ans = A - m_margin;
    }
}
  cout << ans << endl;
}