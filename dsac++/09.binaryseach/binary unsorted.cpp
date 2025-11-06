#include <iostream>
#include <algorithm> // for std::sort
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Sort the array using STL sort
    sort(arr, arr + n);

    cout << "Enter element to search: ";
    cin >> target;

    int result = binarySearch(arr, n, target);
    if(result != -1)
        cout << "Element found at index " << result << " (after sorting)\n";
    else
        cout << "Element not found\n";

    return 0;
}
