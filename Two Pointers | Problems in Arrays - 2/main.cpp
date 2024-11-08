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
