// // Remove all the occurrences of 'a' from string s = "abcax".

// #include<bits/stdc++.h>
// using namespace std;

// string f(string &s, int idx, int n) {
//     // base case
//     if(idx == n) return "";
//     string curr = "";
//     curr += s[idx];
//     return ((s[idx] == 'a') ? "" : curr) + f(s, idx + 1, n);
// }

// int main() {
//     string s = "abcax";
//     int n = 5;
//     cout << f(s, 0, n);
// }

// output:
// bcx
// ............................................................................................
// // write a program to check whether a given number is palindrome
// // or not.

// #include <bits/stdc++.h>
// using namespace std;

// bool f(int num, int *temp) {
//     // Base case: if num becomes 0, return true
//     if (num == 0){
//         return true;
//     }

//     bool result = (f(num / 10, temp) && (num % 10 == (*temp) % 10));

//     // Move to the next digit in *temp
//     (*temp) /= 10;

//     return result;
// }

// int main() {
//     int num = 12621;
//     int anotherNum = num;
//     int *temp = &anotherNum;

//     if (f(num, temp)) {
//         cout << "Palindrome" << endl;
//     }
//     else {
//         cout << "Not a Palindrome" << endl;
//     }
// }

// output:
// Palindrome