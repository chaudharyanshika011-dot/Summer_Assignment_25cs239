#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_set<int> s;

    for(int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }

    cout << "Array after removing duplicates: ";
    for(auto x : s) {
        cout << x << " ";
    }

    return 0;
}