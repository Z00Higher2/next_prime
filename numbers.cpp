// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 5A
// Write a program numbers.cpp that defines a function
// int nextPrime(int n);
// that returns the smallest prime greater than n.


#include <iostream>
using namespace std;

// bool isDivisibleBy(int n, int d){ // declare the boolean fucntion that determines whether n is divisible by d or not

//     if( d == 0 ){
//         cout << "No" << endl;
//         return false;
//     }

//     if (n % d == 0){ // if n is divisible by d

//         cout << "Yes" << endl; // prints yes 
//         return true; // return true

//     } else{

//         cout << "No" << endl; // prints no
//         return false; // returns false;

//     }



bool isPrime(int n){
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;

}


int nextPrime(int n){ // compiles the next prime number

    int prime = n + 1; // add n + 1 to prime

    while(!isPrime(prime)){ // check from the function isPrime(prime)
        prime = prime + 1; // adds 1 to prime

    }

    return prime; // returns prime

}

int main() {

    int num_1, num_2;

    cout << "Enter the first number: ";
    cin >> num_1;

    // cout << "Enter the second number: ";
    // cin >> num_2;

    // cout << isDivisibleBy(num_1, num_2) << endl;

    cout << nextPrime(num_1) << endl;

    return 0;

}