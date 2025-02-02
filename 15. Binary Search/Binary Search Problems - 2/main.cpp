// // Given a mountain array 'a' of length greater than 3, return the index 'i' such that
// // arr[0] < arr[1] < ... < arr[i-1] << arr[i] > arr[i+1] > ... > arr[arr.length-1].
// // This index is known as the peak index.

// // input:
// // Array = [0,4,1,0]

// // output:
// // 1

// #include<bits/stdc++.h>
// using namespace std;

// int peakMountainArray(vector<int> &input) {
//     int lo = 1, hi = input.size() - 1;
//     int ans = -1;
//     while(lo <= hi) {
//         int mid = lo + (hi - lo) / 2;
//         if(input[mid] > input[mid-1]) {
//             // int curve;
//             ans = max(ans, mid);
//             lo = mid + 1;
//         } else {
//             hi = mid - 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> input;
//     int n;
//     cin >> n;
//     while(n--) {
//         int x;
//         cin >> x;
//         input.push_back(x);
//     }
//     cout << peakMountainArray(input) << endl;
// }

// input:
// 4
// 0 4 1 0

// output:
// 1
// ............................................................................................
// // A peak element is an element that is strictly greater than it's neighbors.
// // Given a 0-indexed integer array nums, find a peak element, and return it's
// // index. If the array contains multiple peaks, return the index to any of the peak.
// // You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always
// // considered to be strictly greater than a neighbor that is outside the array.

// // input:
// // Arrat = [1,2,1,2,6,10,3]

// // output:
// // Either index 1 or index 5 are the correct output. At index 1, 2 is the peak element 
// // and at index 5, 10 is the peak element.

// #include<bits/stdc++.h>
// using namespace std;

// int findPeak(vector<int> &input) {
//     int n = input.size();
//     int lo = 0, hi = n-1;
//     while(lo <= hi) {
//         int mid = lo + (hi - lo) / 2;
//         if(mid == 0) {
//             if(input[mid] > input[mid+1]) {
//                 return 0;
//             } else {
//                 return 1;
//             }
//         }
//         else if(mid == n-1) {
//             if(input[mid] > input[mid - 1]) {
//                 return n-1;
//             } else {
//                 return n-2;
//             }
//         } else {
//             if(input[mid] > input[mid+1] and input[mid] > input[mid-1]) {
//                 return mid;
//             } else if(input[mid] > input[mid-1]) {
//                 lo = mid + 1;
//             } else {
//                 hi = mid - 1;
//             }
//         }
//     }
//     return -1;
// }

// int main() {
//     vector<int> input;
//     int n;
//     cin >> n;
//     while(n--) {
//         int x;
//         cin >> x;
//         input.push_back(x);
//     }
//     cout << findPeak(input) << endl;
// }

// input:
// 10
// 3 4 5 1 9 10 2 6 8 2

// output:
// 8
// ............................................................................................
// // Search the 'target' value in a 2D integer matrix of dimensions n * m and return 1 if
// // found, else return 0. This matrix has the following properties: 
// // 1. Integers in each row are sorted from left to right.
// // 2. The first integers of each row is greater than the last integer of the previous row.

// // input:
// // Matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]]
// // target = 3

// // output:
// // 1

// #include<bits/stdc++.h>
// using namespace std;

// bool searchMatrix(vector<vector<int> > &a, int target) {
//     int n = a.size(); // no of rows
//     int m = a[0].size(); // no of cols

//     int lo = 0, hi = n*m - 1;
//     while(lo <= hi) {
//         int mid = lo + (hi - lo) / 2;
//         int x = mid/m;
//         int y = mid%m;
//         if(a[x][y] == target) {
//             return true;
//         } else if(a[x][y] < target) {
//             lo = mid + 1;
//         } else {
//             hi = mid - 1;
//         }
//     }
//     return false;
// }

// int main() {
//     vector<vector<int> > a = {{1,3,5,7}, {10,11,16,20}, {23, 30, 34, 60}};
//     int target = 20;
//     cout << searchMatrix(a, target) << endl;
// }

// output:
// 1