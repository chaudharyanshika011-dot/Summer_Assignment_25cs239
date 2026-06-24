#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;

    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            result = mid;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}