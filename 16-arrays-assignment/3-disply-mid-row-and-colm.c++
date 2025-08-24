#include<iostream>
#include<vector>
using namespace std;

void printMiddleRowAndColumn(vector<vector<int>>& v, int n) {
    int mid = n / 2;

    // Print middle row
    cout << "Middle row: ";
    for (int j = 0; j < n; j++) {
        cout << v[mid][j] << " ";
    }
    cout << endl;

    // Print middle column
    cout << "Middle column: ";
    for (int i = 0; i < n; i++) {
        cout << v[i][mid] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter size of square matrix (odd number like 3, 5, 7...): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Only odd-sized square matrices are allowed!" << endl;
        return 1;
    }

    vector<vector<int>> v(n, vector<int>(n));
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    printMiddleRowAndColumn(v, n);

    return 0;
}
