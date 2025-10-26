#include <iostream>
#include <vector>
using namespace std;

// Function to find largest element in array/vector
int findLargest(const vector<int>& nums) {
    int largest = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }
    return largest;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = findLargest(arr);
    cout << "Largest element in the array is: " << largest << endl;

    return 0;
}
