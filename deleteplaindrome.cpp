#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

bool isPalindrome(const string &s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

bool canBePalindrome(string s) {
    int i = 0, j = s.size() - 1;

    while (i < j) {
        if (s[i] == s[j]) {
            i++;
            j--;
        } else {
            // try removing one char
            return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
        }
    }

    // string was already palindrome, delete any one char if len > 1
    return s.size() > 1;
}

int main() {
    string s;
    cin >> s;
    cout << (canBePalindrome(s) ? "YES" : "NO");
}
