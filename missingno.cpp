#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    vector<int> arr;
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        arr.push_back(value);
    }

    sort(arr.begin(), arr.end());  // Sort for safety

    for (int i = 0; i < size - 1; i++) {
        if (arr[i + 1] != arr[i] + 1) {
            cout << arr[i] + 1 << " is missing" << endl;
            return 0;
        }
    }

    cout << "No missing number" << endl;
}
