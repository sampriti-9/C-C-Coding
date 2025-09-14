#include<iostream>
using namespace std;
void diamond(int n) {
// Upper half
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= n - i; j++) {
cout << " ";
}
for (int k = 1; k <= (2 * i - 1); k++) {
cout << "*";
}
cout << "\n";
}
// Lower half
for (int i = n - 1; i >= 1; i--) {
for (int j = 1; j <= n - i; j++) {
cout << " ";
}
for (int k = 1; k <= (2 * i - 1); k++) {
cout << "*";
}
cout << "\n";
}
}
int main(){
    
    int rows;
cout << "Enter number of rows: ";
cin >> rows;

cout << "\nDiamond:\n";
diamond(rows);
return 0;

}