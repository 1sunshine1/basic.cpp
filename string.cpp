#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string str;
    cin >> str;
    int len = str.size(), flag = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == 'A') flag++;
    }
    cout << flag;
    return 0;
}
