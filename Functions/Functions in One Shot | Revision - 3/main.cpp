// //Calculate sum of two integer number

// #include<bits/stdc++.h>
// using namespace std;

// int addition(int x, int y) {
// 	int result = x + y;
// 	return result;
// }

// int main() {

// 	int x = addition(10, 5);
// 	cout << x;
// }

// output:
// 15
// ............................................................................................
// //Passing string

// #include<bits/stdc++.h>
// using namespace std;

// void fun(string name) {
// 	cout << "Hi " << name << endl;
// }

// int main() {

// 	fun("Tamim");
// }

// output:
// Hi Tamim
// ............................................................................................
// //Function prototype

// #include<bits/stdc++.h>
// using namespace std;

// void fun(string);

// int main() {

// 	fun("Tamim");
// }

// void fun(string name) {
// 	cout << "Hi " << name << endl;
// }

// output:
// Hi Tamim
// ............................................................................................
// //Write a function to print aquares of the first 5 natural numbers.

// #include<bits/stdc++.h>
// using namespace std;

// int calcSquare(int x) {
//     int square = x * x;
//     return square;
// }

// int main() {

//     for(int i=1; i<=5; i++) {
//         cout << calcSquare(i) << " ";
//     }
// }

// output:
// 1 4 9 16 25
// ............................................................................................
// //Given radius of a circle. Write a function to 
// //print the area and circumference of the circle.

// #include <bits/stdc++.h>
// using namespace std;

// double square(int x) {
//     return x * x;
// }

// double circumference(int r) {
//     return 2*3.14*r;
// }

// double area(int r) {
//     return 3.14*square(r);
// }

// int main() {
//     int r = 3;
//     cout << area(r) << " " << circumference(r) << endl;
// }

// output:
// 28.26 18.84
// ............................................................................................
// //Given the age of a person, write a function to check 
// //if the person is eligible to vote or not.

// #include <bits/stdc++.h>
// using namespace std;

// bool checkEligible(int age, int limit) {
//     if(age >= limit) {
//         return true;
//     } else {
//         return false;
//     }
// }

// int main() {
//     int voting_limit = 18;
//     int is_eligible_for_voting = checkEligible(15, voting_limit);
//     if(is_eligible_for_voting) {
//         cout << "Yes, the current person is eligible for vote";
//     } else {
//         cout << "No. the current person is not eligible to vote";
//     }
// }

// output:
// No. the current person is not eligible to vote
// ............................................................................................
// //Given two numbers a and b. write a program using functions 
// //to print all the odd numbers between them

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int a = 1;
//     int b = 10;

//     for(int i=a; i<=b; i++) {
//         if(i%2!=0) {
//             cout << i << " ";
//         }
//     }
// }

// output:
// 1 3 5 7 9
// ............................................................................................
// //Write a programme to check whether it is prime or not.
// //prime numbers present (without function)

// #include <iostream>
// using namespace std;

// int main() {

// 	int n;
// 	cin >> n;
// 	bool flag = true;

// 	for (int i = 2; i * i <= n; i++) {
// 		if (n % i == 0) {
// 			flag = false;
// 			break;
// 		}
// 	}

// 	if (flag) {
// 		cout << "YES";
// 	} else {
// 		cout << "NO";
// 	}
// }
// ............................................................................................
// //Given two numbers a and b, write a program to print all the prime numbers present 

// #include<bits/stdc++.h>
// using namespace std;

// bool isPrime(int num) {
//     if (num <= 1) {
//         return false;  // Handling edge cases
//     } 
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int a=2, b=10;
//     for(int i=a; i<=b; i++) {
//         if(isPrime(i)) {
//             cout << i << " ";
//         }
//     }
// }

// output:
// 2 3 5 7
// ............................................................................................
// //Pass by reference

// #include <bits/stdc++.h>
// using namespace std;

// void swap(int &x, int &y) {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// void fun(int *t) {
//     cout << *t << endl;
// }

// int main() {
//     int x = 9;
//     int c = 1;
//     int &y = x;
    
//     cout << x << " " << y << endl;  // 9 9

//     y = 88;
//     cout << x << " " << y << endl;  // 88 88

//     swap(x, c);
//     cout << x << " " << c << endl;  // 1 88

//     int t = 9;
//     fun(&t);  // 9
// }
// ............................................................................................
// #include<bits/stdc++.h>
// using namespace std;

// void decrease(int n1, int n2) {
// 	n1--;
// 	n2 = n2 - 2;
// 	cout << (n1) << ":" << (n2) << endl;  // 25:11
// }

// int main() {

// 	int p = 26;
// 	int q = 13;
// 	decrease(p, q);
// 	cout << (p) << ":" << (q);  // 26:13
// }

// output:
// 25:11
// 26:13
// ............................................................................................
// #include<bits/stdc++.h>
// using namespace std;

// void makeTwice(int p) {
// 	p = p * 2;
// }

// int main() {

// 	int p = 24;
// 	makeTwice(p);  // The value of p is 24
// }