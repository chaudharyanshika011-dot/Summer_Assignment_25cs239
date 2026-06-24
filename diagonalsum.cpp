#include <iostream>
using namespace std;

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3;
    int primary = 0, secondary = 0;

    for (int i = 0; i < n; i++) {
        primary += a[i][i];           // primary diagonal
        secondary += a[i][n - i - 1]; // secondary diagonal
    }

    cout << "Primary diagonal sum = " << primary << endl;
    cout << "Secondary diagonal sum = " << secondary << endl;

    return 0;
}