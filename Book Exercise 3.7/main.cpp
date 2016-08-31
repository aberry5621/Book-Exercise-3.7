//
//  main.cpp
//  Book Exercise 3.7
//
//  Created by ax on 8/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Book exercise 3.7 - Sort three integers
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // insert code here...
    cout << "Sort Three Integers \n";
    // D
    int n1 = 0.0;
    int n2 = 0.0;
    int n3 = 0.0;
    int d1 = 0.0;
    int d2 = 0.0;
    int d3 = 0.0;
    
    // I
    cout << "Enter three integers: ";
    cin >> n1 >> n2 >> n3;
    
    // P // O
    
    if (n1 < n2) {
        // n1 is smaller than n2
    } else if (n1 < n3) {
        // n1 is smaller than n3
    } else {
        // n1 is bigger than or equal to n2 or n3
    }

    // Find first number to display (smallest)
    if (n1 < n2) {
        if (n1 < n3) {
            // n1 is smaller than n2 and n3
            cout << "The smallest number is " << n1 << endl;
            d1 = n1;
        }
    }
    if (n2 < n1) {
        if (n2 < n3) {
            // n2 is smaller than n1 and n3
            cout << "The smallest number is " << n2 << endl;
            d1 = n2;
        }
    }
    if (n3 < n1) {
        if (n3 < n2) {
            // n3 is smaller than n1 and n2
            cout << "The smallest number is " << n3 << endl;
            d1 = n3;
        }
    }
    // Find second number to display (middle)
    if (n1 < n2) {
        if (n1 > n3) {
            // n1 is smaller than n2 and greater than n3
            cout << "The middle number is " << n1 << endl;
            d2 = n1;
        }
    }
    if (n2 < n1) {
        if (n2 > n3) {
            // n2 is smaller than n1 and greater than n3
            cout << "The middle number is " << n2 << endl;
            d2 = n2;
        }
    }
    if (n3 < n1) {
        if (n3 > n2) {
            // n3 is smaller than n1 and greater than n2
            cout << "The middle number is " << n3 << endl;
            d2 = n3;
        }
    }
    // Find third number to display (highest)
    if (n1 > n2) {
        if (n1 > n3) {
            // n1 is greater than n2 and greater than n3
            cout << "The highest number is " << n1 << endl;
            d3 = n1;
        }
    }
    if (n2 > n1) {
        if (n2 > n3) {
            // n2 is smaller than n1 and greater than n3
            cout << "The highest number is " << n2 << endl;
            d3 = n2;
        }
    }
    if (n3 > n1) {
        if (n3 > n2) {
            // n3 is smaller than n1 and greater than n2
            cout << "The highest number is " << n3 << endl;
            d3 = n3;
        }
    }
    
    cout << "The ranked numbers are " << n1 << n2 << n3 << endl;
    
    
    return 0;
}
