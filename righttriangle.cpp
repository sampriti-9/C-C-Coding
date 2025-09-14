#include <iostream>
using namespace std;

void rightTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n-1; j++){
            cout<<" ";
        }for(int j=1;j<=i;j++){
            cout << "*";
        }
        cout << "\n"; // ye inner loop ke baad hona chahiye
    }
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    rightTriangle(n);
    return 0;
}
