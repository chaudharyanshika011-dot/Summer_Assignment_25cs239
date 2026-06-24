#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    unordered_set<int> s;

    for (int i = 0; i < n1; i++) {
        s.insert(arr1[i]);
    }

    cout << "Common elements: ";

    for (int i = 0; i < n2; i++) {
        if (s.find(arr2[i]) != s.end()) {
            cout << arr2[i] << " ";
            s.erase(arr2[i]);  // Avoid duplicates in output
        }
    }

    return 0;
}