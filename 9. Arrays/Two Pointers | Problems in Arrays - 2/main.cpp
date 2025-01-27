 // // Sort an array consisting of only os and 1s. (Using vector)

// #include<bits/stdc++.h>
// using namespace std;

// void sortZeroesAndOnes(vector<int> &v) {
// 	int zeroes_count = 0;

// 	for (int ele : v) {
// 		if (ele == 0) {
// 			zeroes_count++;
// 		}
// 	}

// 	for (int i = 0; i < v.size(); i++) {
// 		if (i < zeroes_count) {
// 			v[i] = 0;
// 		}
// 		else {
// 			v[i] = 1;
// 		}
// 	}
// }

// int main() {

// 	int n;
// 	cin >> n;

// 	// vector<int> v;  // for ele
// 	vector<int> v(n);  // for cin >> v[i];

// 	for (int i = 0; i < n; i++) {
// 		// int ele;
// 		// cin >> ele;
// 		// v.push_back(ele);

// 		cin >> v[i];
// 	}

// 	sortZeroesAndOnes(v);

// 	for (int i = 0; i < v.size(); i++) {
// 		cout << v[i] << " ";
// 	}

// }

// input:
// 8
// 1 1 0 0 1 1 0 0

// output:
// 0 0 0 0 1 1 1 1
// ............................................................................................
// // Sort an array consisting of only os and 1s. (Using Dynamically allocate array)

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
// 	cin >> n;

// 	// int arr[n];
//     int* arr = new int[n];  // Dynamically allocate array of size n

// 	for (int i = 0; i < n; i++) {
// 		cin >> arr[i];
// 	}

// 	int count = 0;

// 	for (int i = 0; i < n; i++) {
// 		if (arr[i] == 0) {
// 			count++;
// 		}
// 	}

// 	for (int i = 0; i < n; i++) {
// 		if (i < count) {
// 			arr[i] = 0;
// 		} else {
// 			arr[i] = 1;
// 		}
// 	}

// 	for (int i = 0; i < n; i++) {
// 		cout << arr[i] << " ";
// 	}
// }

// output:
// 8
// 1 1 0 0 1 1 0 0

// output:
// 0 0 0 0 1 1 1 1
// ............................................................................................
// // Given an array of integers 'a', move all the even integers at the
// // beginning of the array followed by all the odd integers. The
// // relative order of odd or even integers does not mattter. Return
// // an array that satisfies the condition.

// #include <bits/stdc++.h>
// using namespace std;

// void sortByParity(vector<int> &v) {
//     int left_ptr = 0;
//     int right_ptr = v.size() - 1;

//     while(left_ptr <= right_ptr) {
//         if(v[left_ptr]%2==1 && v[right_ptr]%2==0) {
//             swap(v[left_ptr], v[right_ptr]);
//             left_ptr++; right_ptr--;
//         }

//         if(v[left_ptr]%2==0) {
//             left_ptr++;
//         }

//         if(v[right_ptr]%2==1) {
//             right_ptr--;
//         }
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> v;

//     for(int i=0; i<n; i++) {
//         int ele;
//         cin >> ele;
//         v.push_back(ele);
//     }

//     sortByParity(v);

//     for(int i=0; i<n; i++) {
//         cout << v[i] << " ";
//     }
// }
// ............................................................................................
// //Given an integer array 'a' sorted in non-decreasing
// //order, return an array of the squares of each number
// //sorted in non-decreasing order.

// #include <bits/stdc++.h>
// using namespace std;

// void sortedSquareArray(vector<int> &v) {
//     vector<int> ans;

//     int left_ptr = 0;
//     int right_ptr = v.size() - 1;

//     while(left_ptr <= right_ptr) {
//         if(abs(v[left_ptr]) < abs(v[right_ptr])) {
//             ans.push_back(v[right_ptr] * v[right_ptr]);
//             right_ptr--;
//         } else {
//             ans.push_back(v[left_ptr] * v[left_ptr]);
//             left_ptr++;
//         }
//     }

//     reverse(ans.begin(), ans.end());

//     for(int i=0; i<v.size(); i++) {
//         cout << ans[i] << " ";
//     }
// }

// int main() {

//     int n;
//     cin >> n;
//     vector<int> v;

//     for(int i=0; i<n; i++) {
//         int ele;
//         cin >> ele;
//         v.push_back(ele);
//     }

//     sortedSquareArray(v);
// }

// input:
// 5
// -10 -3 2 4 6

// output:
// 4 9 16 36 100
// ............................................................................................
// //Without function

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

// 	vector<int> ans;

// 	int lp = 0;
// 	int rp = v.size() - 1;

// 	while (lp <= rp) {
// 		if (abs(v[lp]) > abs(v[rp])) {
// 			ans.push_back(v[lp] * v[lp]);
// 			lp++;
// 		} else {
// 			ans.push_back(v[rp] * v[rp]);
// 			rp--;
// 		}
// 	}

// 	reverse(ans.begin(), ans.end());

// 	for (int i = 0; i < v.size(); i++) {
// 		cout << ans[i] << " ";
// 	}
// }

// input:
// 5
// -10 -3 2 4 6

// output:
// 4 9 16 36 100