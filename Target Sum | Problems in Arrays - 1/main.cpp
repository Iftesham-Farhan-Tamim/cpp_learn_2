// //Target sum
// //Find the total number of pairs in the
// //Array whose sum is equal to the given value x.

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {3,4,6,7,1};
//     int x = 7;
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int count = 0;

//     for(int i=0; i<size; i++) {
//         for(int j=i+1; j<size; j++) {
//             if(arr[i]+arr[j] == x) {
//                 count++;
//             }
//         }
//     }

//     cout << count << endl;
// }
// ............................................................................................
// //Count the number of triplets whose sum is equal to the given value x.
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {3,1,2,4,0,6};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int x = 5;
//     int count = 0;

//     for(int i=0; i<size; i++) {
//         for(int j=i+1; j<size; j++) {
//             for(int k=j+1; k<size; k++) {
//                 if(arr[i] + arr[j] + arr[k] == x) {
//                     count++;
//                 }
//             }
//         }
//     }

//     cout << count << endl;
// }

// output:
// 2
// ............................................................................................
// //Array Manipulation
// //Find the unique number in a given Array where 
// //all the element are being repeated twice with one value being unique

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {2,3,1,3,2,4,1};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     for(int i=0; i<size; i++) {
//         for(int j=i+1; j<size; j++) {
//             if(arr[i] == arr[j]) {
//                 arr[i] = arr[j] = -1;
//             }
//         }
//     }

//     for(int i=0; i<size; i++) {
//         if(arr[i] > 0) {
//             cout << arr[i] << endl;
//         }
//     }
// }

// output:
// 4
// ............................................................................................
// //Find the second largest element in the given array.
// #include<bits/stdc++.h>
// using namespace std;

// int secondLargestElement(int arr[], int size) {
//     int max = INT_MIN;
//     int second_max = INT_MIN;

//     for(int i=0; i<size; i++) {
//         if(arr[i] > max) {
//             max=arr[i];
//         }
//     }

//     for(int i=0; i<size; i++) {
//         if(arr[i] > second_max && arr[i]!=max) {
//             second_max=arr[i];
//         }
//     }

//     return second_max;
// }

// int main() {
//     int arr[] = {2,3,5,7,6,1,7};
//     int n = 7;

//     cout << secondLargestElement(arr, n) << endl;
// }

// output:
// 6
// ............................................................................................
// //Rotate the given array 'a' by k steps, where k is non-negative.
// //Note: k can be greater then n as well where n is the size of array 'a'.

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int ans_arr[size];
//     int idx = 0;
//     int k = 2;
//     // k can be greater then size
//     k=k%size;
    
//     for(int i=size-k; i<size; i++) {
//         ans_arr[idx++] = arr[i];
//     }
    
//     for(int i=0; i<=k; i++) {
//         ans_arr[idx++] = arr[i];
//     }
    
//     for(int i=0; i<size; i++) {
//         cout << ans_arr[i] << " ";
//     }
// }

// output:
// 4 5 1 2 3
// ............................................................................................
// //Rotate the given array 'a' by k steps, where k is non-negative.
// //Note: k can be greater then n as well where n is the size of array 'a'.
// //(Using vector)

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
    
//     int k=2;
//     // k can be greater then size
//     k=k%v.size();
    
//     reverse(v.begin(), v.end());
//     reverse(v.begin(), v.begin()+k);
//     reverse(v.begin()+k, v.end());
    
//     for(int i=0; i<5; i++) {
//         cout << v[i] << " ";
//     }
// }

// output:
// 4 5 1 2 3
// ............................................................................................
// //Given Q queries, check if the given number is present
// //in the array or not.

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     vector<int> v(n);
//     for(int i=0; i<n; i++) {
//         cin >> v[i];
//     }
    
//     const int N = 1e5 + 10;
//     vector<int> freq(N, 0);
//     for(int i=0; i<n; i++) {
//         freq[v[i]]++;
//     }
    
//     cout << "Enter queries : ";
//     int q;
//     cin >> q;
    
//     while(q--) {
//         int queryelement;
//         cin >> queryelement;
//         cout << freq[queryelement] << endl;
//     }
// }
// ............................................................................................

// ............................................................................................