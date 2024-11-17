#include <iostream>
#include <string>
#include <algorithm>  

using namespace std;

int main() {
    string s1;
    cout << "Enter string 1: ";
    cin >> s1;

    string s2;
    cout << "Enter string 2: ";
    cin >> s2;

    if (s1.length() != s2.length()) {
        cout << "false" << endl;
        return 0;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1 == s2) {
        cout << "true" << endl;  
    } else {
        cout << "false" << endl;  
    }

    return 0;
}

