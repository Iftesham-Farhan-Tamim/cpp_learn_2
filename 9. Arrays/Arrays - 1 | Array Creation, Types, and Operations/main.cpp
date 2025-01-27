// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4};

//     cout << sizeof(arr) << endl;
//     cout << sizeof(arr) / sizeof(arr[0]) << endl;
// }

// output:
// 16
// 4
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     // for loop
//     for(int i=0; i<size; i++) {
//         cout << arr[i] << endl;
//     }
// }

// output:
// 1
// 2
// 3
// 4
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     // for each loop
//     // for(int ele:arr) {
//     //     cout << ele << endl;
//     // }

//     // while loop
//     int i = 0;
//     while(i<size) {
//         cout << arr[i] << endl;
//         i++;
//     }
// }

// output:
// 1
// 2
// 3
// 4
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     char vowels[5];

//     // for loop 
//     for (int i = 0; i < 5; i++) {
//         cin >> vowels[i];
//     }

//     for (int i = 0; i < 5; i++) {
//         cout << vowels[i] << " ";
//     }

//     // for each loop
//     // for(char &element:vowels) {
//     //     cin >> element;
//     // }

//     // for(int i = 0; i<5; i++) {
//     //     cout << vowels[i] << " ";
//     // }
// }

// output:
// a e i o u
// ............................................................................................
// // Calculate the sum
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4};
//     int size = sizeof(arr) / sizeof(arr[arr[0]]);

//     int sum = 0;
//     for(int i = 0; i<size; i++) {
//         sum+=arr[i];
//     }

//     cout << sum << endl;
// }

// output:
// 10
// ............................................................................................
// // Find the maximum value
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4};
//     int ans = arr[0];

//     for(int i=0; i<5; i++) {
//         if(arr[i] > ans) {
//             ans = arr[i];
//         }
//     }

//     cout << ans << endl;
// }

// output:
// 4
// ............................................................................................
// //Linear search
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4};
//     int x = 3;
//     int size = sizeof(arr) / sizeof(arr[0]);

//     for(int i=0; i<size; i++) {
//         if(arr[i] == x) {
//             cout << "PRESENT" << endl;
//             cout << "INDEX : " << i << endl;
//             return 0;
//         }
//     }

//     cout << "NOT PRESENT" << endl;
// }

// output:
// PRESENT
// INDEX : 2
// ............................................................................................
// //Linear search (boolean methode)
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4};
//     int x = 4;
//     int size = sizeof(arr) / sizeof(arr[0]);
//     bool flag = false;

//     for(int i=0; i<size; i++) {
//         if(x==arr[i]) {
//             // cout << "PRESENT" << endl;
//             flag = true;
//             break;
//         }
//     }

//     // if(flag) {
//     //     cout << "PRESENT" << endl;
//     // } else {
//     //     cout << "NOT PRESENT" << endl;
//     // }

//     // if(!flag) {
//     //     cout << "NOT PRESENT" << endl;
//     // }
// }

// output:
// NOT PRESENT