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
#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(int arr[], int size) {
    int max = INT_MIN;
    int second_max = INT_MIN;

    for(int i=0; i<size; i++) {
        if(arr[i] > max) {
            max=arr[i];
        }
    }

    for(int i=0; i<size; i++) {
        if(arr[i] > second_max && arr[i]!=max) {
            second_max=arr[i];
        }
    }

    return second_max;
}

int main() {
    int arr[] = {2,3,5,7,6,1,7};
    int n = 7;

    cout << secondLargestElement(arr, n) << endl;
}

// output:
// 6
// ............................................................................................

// ............................................................................................

// ............................................................................................

// ............................................................................................

// ............................................................................................