#include<iostream>
using namespace std;

    void rightTriangle(int n) {

    // Outer loop = row number i
    for (int i = 0; i <= n; i++) {

        // Inner loop = print i stars in row i
        // Row 1 → 1 star, Row 2 → 2 stars ...
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cin >> n;
    rightTriangle(n);
    return 0;
}