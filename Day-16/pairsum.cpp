#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, sum;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> sum;

    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        int complement = sum - arr[i];

        if (s.find(complement) != s.end()) {
            cout << "Pair found: " << complement << " " << arr[i];
            return 0;
        }

        s.insert(arr[i]);
    }

    cout << "No pair found";
    return 0;
}