// // Given an array of integers 'a' that is sorted in non-decreasing order. 
// // Find the first and the last position of the given 'target' element in the sorted array. 
// // Follow 0-based indexing.

// // If 'target' is not found in the array, return[-1, -1].

// // Input:
// // Array = {1,2,3,3,3,5,11}, target = 3

// // output:
// // [2, 4]

// #include<bits/stdc++.h>
// using namespace std;

// int lowerbound(vector<int> &input, int target) {
//     int lo = 0, hi = input.size() - 1;
//     int ans = -1;
//     while(lo <= hi) {
//         int mid = lo + (hi-lo) / 2;
//         if(input[mid] >= target) {
//             ans = mid;
//             hi = mid-1;
//         } else {
//             lo = mid+1;
//         }
//     }
//     return ans;
// }

// int upperbound(vector<int> &input, int target) { // first index -> target
//     int lo = 0, hi = input.size() - 1;
//     int ans =  -1;

//     while(lo <= hi) {
//         int mid = lo + (hi-lo) / 2;
//         if(input[mid] > target) {
//             ans = mid;
//             hi = mid - 1; // discard right
//         } else {
//             lo = mid + 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cin >> n;
//     std::vector<int> input;
//     for(int i=0; i<n; i++) {
//         int x;
//         cin >> x;
//         input.push_back(x);
//     }
    
//     int target;
//     cin >> target;
//     std::vector<int> result;
//     int lb = lowerbound(input, target);
//     if(input[lb] != target) {
//         result.push_back(-1);
//         result.push_back(-1);
//     } else {
//         int ub = upperbound(input, target);
//         result.push_back(lb);
//         result.push_back(ub-1);
//     }
//     cout << result[0] << " " << result[1] << endl;
// }

// input:
// 7
// 1 2 3 3 3 5 11
// 3

// output:
// 2 4
// ............................................................................................
// // A rotated sorted array is a sorted array on which rotation operation has been performed
// // some number of times. Given a rotated sorted array, find the index of the minimum element
// // in the array. Follow 0-based indexing.

// // It is guaranteed that all the elements in the array are unique.

// // input:
// // Array = [3,4,5,1,2]
// // output:
// // 3

// #include<bits/stdc++.h>
// using namespace std;

// int findMinimumInSortedRotated(vector<int> &input) {
//     if(input.size() == 1) return input[0];
//     int lo = 0, hi = input.size() - 1;
//     if(input[lo] < input[hi]) { // sorted array
//         return lo;
//     }
//     while(lo <= hi) {
//         int mid = lo+(hi-lo)/2;
//         if(input[mid] > input[mid+1]) return mid+1;
//         if(input[mid] < input[mid-1]) return mid;
//         if(input[mid] > input[lo]) {
//             lo = mid + 1;
//         } else {
//             hi = mid - 1;
//         }
//     }
//     return -1;
// }

// int main() {
//     int n;
//     cin >> n;
//     std::vector<int> input;
//     for(int i=0; i<n; i++) {
//         int x;
//         cin >> x;
//         input.push_back(x);
//     }
//     cout << findMinimumInSortedRotated(input) << endl;
// }

// input:
// 5
// 3 4 5 1 2

// output:
// 3
// ............................................................................................
// // Given the rotated sorted array of integers, which contains distinct element, and an integer
// // target, return the index of target if it is in the array. Otherwise return -1.

// // input:
// // Array = [3,4,5,1,2], target = 4

// // output:
// // 1

// #include<bits/stdc++.h>
// using namespace std;

// int binarySearchSortedRotated(vector<int> &input, int target) {
//     int lo = 0, hi = input.size() - 1;
//     while(lo <= hi) {
//         int mid = lo + (hi-lo) / 2;
//         if(input[mid] == target) return mid;
//         if(input[mid] >= input[lo]) {
//             if(target > input[lo] and target <= input[mid]) {
//                 hi = mid - 1;
//             } else {
//                 lo = mid + 1;
//             }
//         } else {
//             if(target >= input[mid] and target <= input[hi]) {
//                 lo = mid + 1;
//             } else {
//                 hi = mid - 1;
//             }
//         }
//     }
//     return -1;
// }

// int main() {
//     int n;
//     cin >> n;
//     std::vector<int> input;
//     for(int i=0; i<n; i++) {
//         int x;
//         cin >> x;
//         input.push_back(x);
//     }
//     int target;
//     cin >> target;
//     cout << binarySearchSortedRotated(input, target) << endl;
// }

// input:
// 7
// 4 5 6 7 0 1 2
// 0

// output:
// -1
// ............................................................................................
// // Search element in rotated sorted array with duplicate element. Return 1 if the element
// // is found, else return 0.

// // input:
// // [0,0,0,1,1,1,2,0,0,0] target = 2

// // output:
// // 1

// #include <bits/stdc++.h> 
// using namespace std;

// int search(vector<int> &nums, int target) {
//     int left = 0, right = nums.size() - 1;
    
//     while (left <= right) {
//         int mid = left + (right - left) / 2;
        
//         // Check if the mid element is the target
//         if (nums[mid] == target) {
//             return 1; // Element found
//         }
        
//         // If duplicates are present, skip them
//         if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
//             left++;
//             right--;
//         }
//         // Left part is sorted
//         else if (nums[left] <= nums[mid]) {
//             if (nums[left] <= target && target < nums[mid]) {
//                 right = mid - 1;
//             } else {
//                 left = mid + 1;
//             }
//         } 
//         // Right part is sorted
//         else {
//             if (nums[mid] < target && target <= nums[right]) {
//                 left = mid + 1;
//             } else {
//                 right = mid - 1;
//             }
//         }
//     }
//     return 0; 
// }

// int main() {
//     int n;
//     cin >> n;
//     std::vector<int> input;
//     for(int i=0; i<n; i++) {
//         int x;
//         cin >> x;
//         input.push_back(x);
//     }
//     int target;
//     cin >> target;
//     cout << search(input, target) << endl;
// }

// input:
// 10
// 0 0 0 1 1 1 2 0 0 0
// 2

// output:
// 1