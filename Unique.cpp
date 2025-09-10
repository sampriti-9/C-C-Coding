#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    bool freq[256] = {false}; // Track characters
    int uniqueCount = 0;

    for (char ch : s) {
        if (!freq[(unsigned char)ch]) {
            freq[(unsigned char)ch] = true;
            uniqueCount++;
        }
    }

    cout << "Unique characters: " << uniqueCount << endl;
    return 0;
}
