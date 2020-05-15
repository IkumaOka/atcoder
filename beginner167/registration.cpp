#include <iostream>
#include <string>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  string ans = "No";
  // Sの長さ
  int s_length = S.length();
  // TからSの長さ分だけ取り出す
  string T_s = T.substr(0, s_length);
  int t_length = T.length();
  if (t_length == (s_length+1)) {
    if (S == T_s){
      ans = "Yes";
    }
  }
  cout << ans << endl;
}