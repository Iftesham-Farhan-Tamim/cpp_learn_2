// //Given an integers array 'a', return  prefix sum/
// //running sum in the same array without creating a
// // new array

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
// 	cin >> n;

// 	vector<int> v;
// 	for (int i = 0; i < n; i++) {
// 		int ele;
// 		cin >> ele;
// 		v.push_back(ele);
// 	}

// 	for (int i = 1; i < v.size(); i++) {
// 		v[i] += v[i - 1];
// 	}

// 	for (int i = 0; i < v.size(); i++) {
// 		cout << v[i] << " ";
// 	}
// }

// input:
// 5
// 5 4 1 2 3

// output:
// 5 9 10 12 15
// ............................................................................................
// //Check if we can partition the array into two subarrays with
// //equal sum. More formally, check that the prefix sum of a part
// //of the array is equal to the suffix sum of rest of the array

// prefix sum i = sum(a0_ _ _ _ai)
// suffix sum i+1 = sum(ai+1_ _ _ _an-1)
// prefix sum i + suffix sum i+1 = total sum of the array

// #include <bits/stdc++.h>
// using namespace std;

// bool checkPrefixSuffixSum(vector<int> &v) {
//     int total_sum = 0;
//     for(int i=0; i<v.size(); i++) {
//         total_sum+=v[i];
//     }

//     int prefix_sum = 0;
//     for(int i=0; i<v.size(); i++) {
//         prefix_sum+=v[i];
//         int suffix_sum = total_sum - prefix_sum;

//         if(suffix_sum == prefix_sum) {
//             return true;
//         }
//     }
//     return false;
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
//     cout << checkPrefixSuffixSum(v) << endl;
// }

// input:
// 5
// 6 2 4 3 1

// output:
// 1
// ............................................................................................
// //Without using function

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

// 	int ts = 0;
// 	for (int i = 0; i < v.size(); i++) {
// 		ts += v[i];
// 	}

// 	int ps = 0;
// 	bool flag = false;
// 	for (int i = 0; i < v.size(); i++) {
// 		ps += v[i];

// 		int ss = ts - ps;

// 		if (ss == ps) {
// 			flag = true;
// 		}
// 	}

// 	if (flag) {
// 		cout << flag << endl;
// 	} else {
// 		cout << flag << endl;
// 	}
// }

// input:
// 5
// 6 2 4 3 1

// output:
// 1
// ............................................................................................
