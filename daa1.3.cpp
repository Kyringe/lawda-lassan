// Code to find frequency of elements in a given array

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    const int MAX_SIZE = 1000;
    int freq[MAX_SIZE] = {0};
    for (int i = 0; i < n; ++i) {
        freq[arr[i]]++;
    }
    cout << "Frequency of elements:" << endl;
    for (int i = 0; i < MAX_SIZE; ++i) {
        if (freq[i] > 0) {
            cout << i << ": " << freq[i] << " times" << endl;
        }
    }
    return 0;
}
