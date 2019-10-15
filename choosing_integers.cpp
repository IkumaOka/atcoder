#include <iostream>
using namespace std;
#include <string>

int main(){   
    int a, b, c;
    cin >> a >> b >> c;
    string ans = "NO";
    for (int i = 1; i <=b; i++){
        int num = i * a;
        int result = num % b;
        if (result == c){
            ans = "YES";
            break;
        }
    }

    cout << ans << endl;

    return 0;
}