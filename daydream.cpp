#include <iostream>
#include <string>
#include <regex>
using namespace std;
 
int main() {
    string str = "dreameraser";
    string r = regex_replace(str, regex("dreamer|eraser|dream|erase"), "");
    size_t size = r.length();
    if(size == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    cout << size;
    return 0;
}