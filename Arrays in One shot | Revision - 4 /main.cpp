// //Given two vectors arr1[] ans arr2[] of size m and n sorted in increasing order.
// //Merge the two arrays into a single sorted array of size m+n.

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	int arr1[] = {1, 6, 7, 10};
// 	int arr2[] = {0, 1, 3, 8, 11, 12, 15, 18};

// 	// int n = 4;
// 	// int m = 8;

// 	int n = sizeof(arr1) / sizeof(arr1[0]);
// 	int m = sizeof(arr2) / sizeof(arr2[0]);

// 	int result[m + n];
// 	int i = 0;
// 	int j = 0;
// 	int k = 0;

// 	while (i < n && j < m) {
// 		if (arr1[i] < arr2[j]) {
// 			result[k] = arr1[i];
// 			i++;
// 			k++;
// 		} else {
// 			result[k] = arr2[j];
// 			j++;
// 			k++;
// 		}
// 	}

// 	while (i < n) {
// 		result[k] = arr1[i];
// 		k++;
// 		i++;
// 	}

// 	while (j < m) {
// 		result[k] = arr2[j];
// 		j++;
// 		k++;
// 	}

// 	for (int i = 0; i < (m + n); i++) {
// 		cout << result[i] << " ";
// 	}
// }

// output:
// 0 1 1 3 6 7 8 10 11 12 15 18
// ............................................................................................
// //Given a vector arr[] sorted in increasing order of size n and an integer x.
// //find if there exists a pair in the array whose sum is exactly x.

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {-2, -1, 0, 3, 6, 8, 11, 12};
//     int x = 14;
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int i=0;
//     int j = n-1;
//     bool found = false;

//     while(i < j) {
//         if(arr[i]+arr[j] == x) {
//             found = true;
//             break;
//         } else if(arr[i]+arr[j] < x) {
//             i++;
//         } else {
//             j--;
//         }
//     }

//     if(found) {
//         cout << "YES";
//     } else {
//         cout << "NO";
//     }
// }

// output:
// YES  
// ............................................................................................
// //Given a vector arr[] sorted in increasing order of n size and an integer x,
// //find if there exists a pair in the array whose absolute difference is exactly x.

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {5, 10, 15, 20, 26};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int x = 10;

//     int i=0; 
//     int j=n-1;
//     bool found = false;

//     while(i<j) {
//         if(abs(arr[i]-arr[j]) == x) {
//             found = true;
//             break;
//         } else if(abs(arr[i]-arr[j]) < x) {
//             j--;
//         } else {
//             i++;
//         }
//     }

//     if(found) {
//         cout << "YES";
//     } else {
//         cout << "NO";
//     }
// }

// output:
// NO
// ............................................................................................
// //Given a vector arr[] sorted in increasing order. Return an array of squares
// //of each number sorted in increasing order, where size of vector 1<size<101.

// ............................................................................................
// //Given a vector arr[] sorted in increasing order of n size and an integer x.
// //find the number of unique pairs that exist in the array whose absolute sum is exactly x.

// ............................................................................................
// //Given a vector array nums, print the count of triplets [nums[i], nums[j], nums[k]]
// //such that i!=j, i!=k and j!=k, and nums[i] + nums[j] + nums[k] ==x. where k is an
// //integer given by the user.

// ............................................................................................

// ............................................................................................

// ............................................................................................

// ............................................................................................

// ............................................................................................

// ............................................................................................
