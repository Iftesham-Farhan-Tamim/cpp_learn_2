// // Given two vectors arr1[] ans arr2[] of size m and n sorted in increasing order.
// // Merge the two arrays into a single sorted array of size m+n.

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
// // Given a vector arr[] sorted in increasing order of size n and an integer x.
// // find if there exists a pair in the array whose sum is exactly x.

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
// // Given a vector arr[] sorted in increasing order of n size and an integer x,
// // find if there exists a pair in the array whose absolute difference is exactly x.

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
// // Given a vector arr[] sorted in increasing order. Return an array of squares
// // of each number sorted in increasing order, where size of vector 1<size<101.
 
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	int n;
// 	cin >> n;
// 	vector<int> v;
// 	vector<int> a;

// 	for (int i = 0; i < n; i++) {
// 		int ele;
// 		cin >> ele;
// 		v.push_back(ele);
// 	}

// 	int lp = 0;
// 	int rp = v.size() - 1;

// 	while (lp <= rp) {
// 		if (abs(v[lp]) > abs(v[rp])) {
// 			a.push_back(v[lp]*v[lp]);
// 			lp++;
// 		} else {
// 			a.push_back(v[rp]*v[rp]);
// 			rp--;
// 		}
// 	}

// 	reverse(a.begin(), a.end());

// 	for (int i = 0; i < a.size(); i++) {
// 		cout << a[i] << " ";
// 	}
// }

// input:
// 6
// -4 -3 -1 0 2 10

// output:
// -4 -3 -1 0 2 10
// ............................................................................................
// // Given a vector arr[] sorted in increasing order of n size and an integer x.
// // find the number of unique pairs that exist in the array whose absolute sum is exactly x.

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	int n;
// 	cin >> n;
// 	vector<int> v;

// 	for (int i = 0; i < n; i++) {
// 		int ele;
// 		cin >> ele;
// 		v.push_back(ele);
// 	}

// 	int x;
// 	cin >> x;
// 	int count = 0;

// 	int lp = 0;
// 	int rp = v.size() - 1;

// 	while (lp <= rp) {
// 		if (v[lp] + v[rp] == x) {
// 			count++;
// 			lp++;
// 			rp--;
// 		} else if (v[lp] + v[rp] < x) {
// 			lp++;
// 		} else {
// 			rp--;
// 		}
// 	}

// 	cout << count;
// }

// input:
// 6
// 1 2 3 4 5 6
// 7

// output:
// 3
// ............................................................................................
// // Given an array arr[] of n integers. Check whether it contains a triplet
// // that sums up to zero.

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	vector<int> v;

// 	int n;
// 	cin >> n;
// 	int x;
// 	cin >> x;
// 	int count = 0;

// 	for (int i = 0; i < n; i++) {
// 		int ele;
// 		cin >> ele;
// 		v.push_back(ele);
// 	}

// 	sort(v.begin(), v.end());

// 	for (int i = 0; i < v.size(); i++) {
// 		int lp = i + 1;
// 		int rp = v.size() - 1;
// 		while (lp <= rp) {
// 			int sum = v[i] + v[lp] + v[rp];
// 			if (sum == x) {
// 				count++;
// 				lp++;
// 				rp--;
// 			} else if (sum < 0) {
// 				lp++;
// 			} else {
// 				rp--;
// 			}
// 		}
// 	}

// 	cout << count << endl;
// }

// input:
// 5
// 0
// -3 -1 0 1 2

// output:
// 2
// ............................................................................................
// // Given a vector array nums, print the count of triplets [nums[i], nums[j], nums[k]]
// // such that i!=j, i!=k and j!=k, and nums[i] + nums[j] + nums[k] == x. where k is an
// // integer given by the user.

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	vector<int> v;
// 	int n, k;
// 	cin >> n >> k;

// 	int count = 0;
// 	int x;
// 	cin >> x;

// 	for (int i = 0; i < n; i++) {
// 		int ele;
// 		cin >> ele;
// 		v.push_back(ele);
// 	}

// 	// Fix the element at index k
// 	int fixedElement = v[k];

// 	for (int i = 0; i < v.size(); i++) {
// 		if (i == k) continue;  // Skip the index k as it is already fixed
// 		int lp = i + 1;
// 		int rp = v.size() - 1;
// 		while (lp < rp) {
// 			int sum = v[i] + v[lp] + fixedElement;
// 			if (sum == x) {
// 				count++;
// 				lp++;
// 				rp--;
// 				// Skip duplicates for left pointer
// 				while (lp < rp && v[lp] == v[lp - 1]) lp++;
// 				// Skip duplicates for right pointer
// 				while (lp < rp && v[rp] == v[rp + 1]) rp--;
// 			} else if (sum < x) {
// 				lp++;
// 			} else {
// 				rp--;
// 			}
// 		}
// 	}

// 	cout << count << endl;
// }

// input:
// 5
// 2
// 0
// -3 -1 0 1 2

// output;
// 1