#include <iostream>
using namespace std;
int main() {
    int n;
cout << "Enter number of rows: ";
    cin >> n;
for (int i = 1; i <= n; i++) {
   // print increasing characters
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1);
        }
    // print decreasing characters
        for (int j = i - 1; j >= 1; j--) {
            cout << char('A' + j - 1);
        }
    cout << endl;
    }
 return 0;
}