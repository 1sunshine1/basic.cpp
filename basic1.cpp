#include <iostream>
using namespace std;
int main() {
    int len = 0;
    string str;
    while (cin >> str) {
            len = str.size(); 
    }
    cout << len; 
    return 0;
}
