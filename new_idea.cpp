#include <iostream>
#include <ctype.h>
using namespace std;

int calc(char s) {
    int ret = s - '0';
    if (ret >= 0 && ret <= 9) {
        cout << ret;
    } else if (ret >= 17 && ret <= 42) {
        ret -= 17;
        ret = (ret + 1 + 26) % 26 + 65;
        cout << (char)ret;
    } else {
        ret -= 49;
        ret = (ret + 1 + 26) % 26 + 97;
        cout << (char)ret;
    } 
    return ret;
}

int main() {
    string str;
    cin >> str;
    int len = str.size();
    for (int i = 0; i < len; i++) {
        calc(str[i]);
    }
    return 0;
}
