#include <iostream>
using namespace std;

int main()
{   
    int h, w;
    string ans = "No";
    cin >> h >> w;
    if (h == 1){
        if (w % 7 == 0 or w % 7 == 2 or w % 7 == 5){
            ans = "Yes";
        }
    }

    if (h == 2){
        if (w % 7 == 0 or w % 7 == 1 or w % 7 == 6){
            ans = "Yes";
        }
    }
    // if (w == 1){
    //     if (h % 7 == 0 or h % 7 == 2 or h % 7 == 5){
    //         ans = "Yes";
    //     }
    // }

    // if (w == 2){
    //     if (h % 7 == 0 or h % 7 == 1 or h % 7 == 6){
    //         ans = "Yes";
    //     }
    // }

    if (h == 3 and w == 3){
        ans = "Yes";
    }
    cout << ans << endl;

    return 0;
}