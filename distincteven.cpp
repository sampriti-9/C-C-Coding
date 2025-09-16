#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<int> st;

    // Insert only even elements into set
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            st.insert(arr[i]);
        }
    }
int count=0;
    int ans = 0;
    for (int x : st) {
        ans += x;
        count++;
    }

   cout << "Sum of distinct even elements = " << ans << "\n";
cout << "Number of distinct even elements = " << count << "\n";

    return 0;
}
