// // Given an array of n integers and a target value x. Print whether x exists in the array or not.

// // Constraints: 0<=n<=1e6, -1e8<=x<=1e8, -1e8<=a[i]<=1e8
// // Input1: n=8, x=14, array=[4, 12, 54, 14, 3, 8, 6, 1]
// // Output1: Yes

// // Input2: n=1, x=9, array=[2]
// // Output2: No

// #include<bits/stdc++.h>
// using namespace std;
// // f represents whether x is present in the range [i, n-1] or not ?
// bool f(int *arr, int n, int i, int x) {
//     // base case
//     if(i == n) {
//         // array is exhausted
//         return true;
//     }
//     return (arr[i] == x) || f(arr, n, i+1, x);
// }
// int main() {
//     int arr[] = {5,4,1,8,6,-9,8,2,3,5};
//     int n = 10;
//     int x = 8;
//     bool result = f(arr, n, 0, x);
//     if(result) cout << "Yes";
//     else cout << "No";
// }

// output:
// Yes
// ............................................................................................
// // Given an array of integers, print sums of all subsets in it. Output sums can be
// // printed in any order.

// // Input: arr[] = {2, 3}
// // Output: 0 2 3 5

// // Input: arr[] = {2,4,5}
// // Output: 0 2 4 5 6 7 9 11

// #include<bits/stdc++.h>
// using namespace std;

// void f(int *arr, int n, int i, int sum, vector<int> &result) {
//     // base csae
//     if(i == n) {
//         result.push_back(sum);
//         return;
//     }
//     f(arr, n, i+1, sum + arr[i], result);
//     f(arr, n, i+1, sum, result);
// }

// int main() {
//     int arr[] = {2,4,5};
//     int n = 3;
//     vector<int> result;
//     f(arr, n, 0, 0, result);
//     for(int i=0; i<result.size(); i++) {
//         cout << result[i] << " ";
//     }
// }

// output:
// 11 6 7 2 9 4 5 0
// ............................................................................................
// // The problem is to count all the possible paths on an m*n grid from top left
// // (grid[0][0] to bottom right grid[m-1][n-1]).

// // Having constraints that from each cell you can either ove only to right or down.

// // m = 2, n = 3
// // output: 3

// #include<bits/stdc++.h>
// using namespace std;

// int f(int i, int j, int m, int n) {
//     if(i == m-1 and j== n-1) return 1;
//     if(i >= m or j >= n) return 0;
//     return f(i, j+1, m, n) + f(i+1, j, m, n);
// }

// int main() {
//     cout << f(0, 0, 3, 3);
// }

// output:
// 6