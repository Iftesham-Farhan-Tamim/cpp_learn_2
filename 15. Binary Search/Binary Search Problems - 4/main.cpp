// // You have 'n' (n<=10^5) boxes of chocolate. Each box contains a[i] (a[i]<=10000) chocolates.
// // You need to distribute these boxes among 'm' students such that the maximum number of chocolates
// // allocated to a student is minimum.

// // a. One box will be allocated to exactly one student.
// // b. All the boxes should be allocated.
// // c. Each students has to be allocated at least one box.
// // d. allotment should be in contigupus order, for instance, a student cannot be allocated 
// // box 1 and box 3, skipping box 2.

// // Calculate and return that minimum possible number,
// // Assume that it is a always possible to distribute the chocolates.

// // The first line of input will contain the value of n, the number of boxes.
// // The second line of input will contain the n numbers denoting the number of chocolates in 
// // each box.
// // The third line will contain the m, number of students.

// // input:
// // 4
// // 12 34 67 90
// // 2

// // output:
// // 113

// #include<bits/stdc++.h>
// using namespace std;

// bool canDistChoco(vector<int> &arr, int mid, int s) {
//     int n = arr.size();
//     int studentsReqd = 1;
//     int currSum = 0;
//     for(int i=0; i<n; i++) {
//         if(arr[i] > mid) {
//             return false;
//         }
//         if(currSum + arr[i] > mid) {
//             studentsReqd++;
//             currSum =  arr[i];
//             if(studentsReqd > s) {
//                 return false;
//             }
//         } else {
//             currSum += arr[i];
//         }
//     }
//     return true;
// }

// int distChoco(std::vector<int> &arr, int s) {
//     int n = arr.size();
//     int lo = arr[0];
//     int hi = 0;
//     for(int i=0; i<arr.size(); i++) {
//         hi += arr[i];
//     }
//     int ans = -1;
//     while(lo <= hi) {
//         int mid = lo + (hi - lo) / 2;
//         if(canDistChoco(arr, mid, s)) {
//             ans = mid;
//             hi = mid - 1;
//         } else {
//             lo = mid + 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> v;
//     for(int i=0; i< n; i++) {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     int s;
//     cin >> s;
//     cout << distChoco(v, s) << endl;
// }

// input:
// 4
// 12 34 67 98
// 2

// output:
// 113
// ............................................................................................
// // A new racing track for kids is being built in New York with 'n' starting spots. The spots
// // are located along a straight line at position x1, x2...xn(xi <= 10^9). For each 'i', xi+1>xi.
// // At a time only 'm' children are allowed to enter the race. Since the race track is for kids, 
// // they may run into each other while running. To prevent this, we want to chose the starting spots
// // such that the minimum distance between any two of them is as large as possible. What is the largest 
// // minimum distance?

// // The first line of input will contain the value of n, the number of starting spota.
// // The second line of input will contain the n numbers denoting the location of each 
// // spot. the third line will contain the value of m, number of childern.

// // input:
// // 5
// // 1 2 4 8 9

// // output:
// // 3

#include<bits/stdc++.h>
using namespace std;

bool canPlaceStudents(vector<int> &pos, int s, int mid) {
    int studentsReqd = 1;
    int lastPlaced = pos[0];
    for(int i=0; i<pos.size(); i++) {
        if(pos[i] - lastPlaced >= mid) {
            studentsReqd++;
            lastPlaced = pos[i];
            if(studentsReqd == s) {
                return true;
            }
        }
    }
    return false;
}

int race(vector<int> &pos, int s) {
    int n = pos.size();
    int lo = 1;
    int hi = pos[n-1] - pos[0];
    int ans = -1;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(canPlaceStudents(pos, s, mid)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> pos;
    while(n--) {
        int x;
        cin >> x;
        pos.push_back(x);
    }
    int s;
    cin >> s;
    cout << race(pos, s) << endl;
}

// input:
// 5
// 1 2 4 8 9
// 3

// output:
// 3