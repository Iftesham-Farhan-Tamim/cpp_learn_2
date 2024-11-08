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

// ............................................................................................
// //Given two numbers a and b, write a program to print all the prime numbers present 
// ............................................................................................

// ............................................................................................

// ............................................................................................
