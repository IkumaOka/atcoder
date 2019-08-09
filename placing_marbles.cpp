#include <iostream>
using namespace std;

int main()
{   
    int num, dig;
    int sum = 0;
    cin >> num;
    while(num){
        dig = num % 10;
        sum += dig;
        num /= 10;
    }
    cout << sum << endl;
    return 0;
}