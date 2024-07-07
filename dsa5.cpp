#include<iostream>
#include<vector>
using namespace std;

vector<int> threeIndices(int arr[], int n) {
    for (int k = n - 1; k >= 0; k--) {
        int i = 0;
        int j = k - 1; // Initialize j correctly
        while (i < j) {
            if (arr[i] + arr[j] == arr[k]) {
                vector<int> indices = {i, j, k};
                return indices;
            }
            else if (arr[i] + arr[j] < arr[k]) {
                i++;
            }
            else {
                j--;
            }
        }
    }
    return {}; // Return an empty vector if no such indices found
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[90];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result = threeIndices(arr, n);
    if (result.size() == 3) {
        cout << "Indices are: " << result[0] << ", " << result[1] << ", " << result[2] << endl;
    } else {
        cout << "No such indices found." << endl;
    }
    return 0;
}
