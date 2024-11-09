// //Pass by Reference

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int p = 5;
//     int &q = p;

//     q++;
//     cout << p << endl;  // 6

//     cout << &p << endl;  // 0x7ffee78b96dc
//     cout << &q << endl;  // 0x7ffee78b96dc
// }
// ............................................................................................
// //Pass by Reference

// #include <bits/stdc++.h>
// using namespace std;

// void changeValue(int &z) {
//     z = 100;
// }

// void changeValue1(int &z, int &y) {
//     z = 100;
//     y = 99;
// }

// int main() {
//     int a = 5;
//     int b = 5;

//     changeValue(a);
//     cout << a << endl;  // 100

//     changeValue1(a, b);
//     cout << a << " " << b << endl;  // 100 99
// }
// ............................................................................................
// //Pass by value
// //Function to add 3 integer number

// #include <bits/stdc++.h>
// using namespace std;

// int add(int a, int b=1, int c=2) {
//     return (a+b+c);
// }

// int main() {
//     cout << add(2) << endl;  // 5
//     cout << add(2, 2) << endl;  // 6
//     cout << add(2, 2, 3) << endl;  // 7
// }