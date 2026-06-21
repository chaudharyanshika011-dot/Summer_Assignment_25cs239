#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int maxElement = arr[0];

    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxElement = it.first;
        }
    }

    cout << "Element with maximum frequency: " << maxElement << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}