// // Problem of searching

// #include<bits/stdc++.h>
// using namespace std;

// int binarySearch(vector<int> &input, int target) {
//     // define search space
//     int lo = 0; // start of search space
//     int hi = input.size() - 1; // end of the search space
//     while(lo <= hi) {
//         // calc midpoint for the search space
//         int mid = (lo + hi) / 2;
//         if(input[mid] == target) return mid;
//         else if(input[mid] < target) {
//             // discard the left of mid
//             lo = mid + 1;
//         } else {
//             // discard the right of mid
//             hi = mid - 1;
//         } 
//     }
//     return -1;
// }

// int main() {
//     vector<int> input {2,4,5,7,15,24,45,50};
//     int target = 15;
//     cout << binarySearch(input, target) << endl;
// }

// g++ main.cpp --std=c++14 -o run
// ./run

// output:
// 4
// ............................................................................................
// // Recursive Binary search implementation

// #include<bits/stdc++.h>
// using namespace std;

// int binarySearchRecursive(vector<int> &input, int target, int lo, int hi) {
//     if(lo > hi) {
//         return -1;
//     }

//     int mid = (lo+hi)/2;
//     if(input[mid] == target) {
//         return mid;
//     }

//     if(input[mid] < target) {
//         return binarySearchRecursive(input, target, mid+1, hi);
//     } else {
//         return binarySearchRecursive(input, target, lo, mid-1);
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> input;
//     for(int i=0; i<n; i++) {
//         int x;
//         cin >> x;
//         input.push_back(x);
//     }
//     int target;
//     cin >> target;
//     cout << binarySearchRecursive(input, target, 0, n-1) << endl;
// }

// input:
// 5
// 10 13 14 16 20
// 16

// output:
// 3