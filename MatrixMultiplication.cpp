#include <iostream>
using namespace std;

int main() {
    int m, n, p;
    // Input dimensions
    cout << "Enter number of rows for first matrix: ";
    cin >> m;
    cout << "Enter number of columns for first matrix / rows for second matrix: ";
    cin >> n;
    cout << "Enter number of columns for second matrix: ";
    cin >> p;

    int m1[m][n], m2[n][p], result[m][p];

    // Input first matrix
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m1[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> m2[i][j];
        }
    }

    // Initialize result matrix to 0
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            result[i][j] = 0;

    // Multiply matrices
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Print the result
    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
