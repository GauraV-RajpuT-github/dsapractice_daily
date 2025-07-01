// #include <iostream>
// #include <vector>
// using namespace std;

// int maxSumSubarrayOfSizeK(vector<int>& arr, int k) {
//     int i = 0, j = 0;
//     int windowSum = 0, maxSum = 0;

//     while (j < arr.size()) {
//         windowSum += arr[j];  // Add current element

//         if (j - i + 1 < k) {
//             j++;  // Expand the window
//         } else if (j - i + 1 == k) {
//             maxSum = max(maxSum, windowSum);  // Update max if needed

//             windowSum -= arr[i];  // Slide the window
//             i++;
//             j++;
//         }
//     }

//     return maxSum;
// }


int maxSumBruteForce(vector<int>& arr, int k) {
    int maxSum = INT_MIN;
    for (int i = 0; i <= arr.size() - k; i++) {
        int sum = 0;
        for (int j = i; j < i + k; j++) {
            sum += arr[j];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int maxSumPrefix(vector<int>& arr, int k) {
    int n = arr.size();
    vector<int> prefix(n + 1, 0);
    
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + arr[i];
    }

    int maxSum = INT_MIN;
    for (int i = 0; i <= n - k; i++) {
        int sum = prefix[i + k] - prefix[i];
        maxSum = max(maxSum, sum);
    }

    return maxSum;
}

int maxSumSlidingWindow(vector<int>& arr, int k) {
    int n = arr.size();
    if (n < k) return -1;

    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];  // slide window
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

// int main() {
//     vector<int> arr = {2, 1, 5, 1, 3, 2};
//     int k = 3;

//     int result = maxSumSubarrayOfSizeK(arr, k);
//     cout << "Max sum of subarray of size " << k << " is: " << result << endl;

//     return 0;
// }