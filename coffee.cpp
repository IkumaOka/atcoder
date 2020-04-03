#include <iostream>
using namespace std;
#include <string>

int main(){   
    string str;
    cin >> str;
    string ans = "No";
    if (str[2] == str[3] and str[4] == str[5]){
        ans = "Yes";
    }

    cout << ans << endl;

    return 0;
}