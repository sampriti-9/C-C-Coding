#include <iostream>
#include <numeric>   // for std::gcd
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 5};
    int n = 4;

    cout << "Using predefined std::gcd:\n";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (gcd(arr[i], arr[j]) == 1) {   // direct gcd
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }return 0;
}
