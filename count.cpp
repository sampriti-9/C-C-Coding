#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int freq[256] = {0};

  
    for (int i = 0; i < (int)s.size(); i++) {
        char c = s[i];
        freq[(unsigned char)c] = freq[(unsigned char)c] + 1;
    }

 
    int count = 0;
    for (int i = 0; i < 256; i++) {
        if (freq[i] == 2) {
            count = count + 1;
        }
    }

    cout << "Count = " << count << endl;
    return 0;
}
