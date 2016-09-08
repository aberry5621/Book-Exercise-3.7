//
//  main.cpp
//  Book Exercise 3.7
//
//  Created by ax on 8/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Book exercise 3.7 - Sort three integers
//
// TODO: accommodate equivalent inputs in ranking, e.g. input 4 8 4

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	cout << "Sort Three Integers \n";
	// D
	int a = 0.0, b = 0.0, c = 0.0;
	int d1 = 0.0, d2 = 0.0, d3 = 0.0;

	// I
	cout << "Enter three integers (1 2 3): ";
	cin >> a >> b >> c;

	// P // O

	// primary true path
	// a < b TRUE
	if (a < b) {
		// a < c
		if (a < c) {
			// b < c
			if (b < c) {
				cout << "abc" << endl;
				d1 = a, d2 = b, d3 = c;
			} else { 
				cout << "acb" << endl;
				d1 = a, d2 = c, d3 = b;
			}
		} else { 
			cout << "cab" << endl;
			d1 = c, d2 = a, d3 = b;
		}
	}
	// primary false path 
	// a < b FALSE
	else {
		// a < c 
		if (a < c) {
			cout << "bac" << endl;
			d1 = b, d2 = a, d3 = c;
		} else {
			// b < c
			if (b < c) {
				cout << "bca" << endl;
				d1 = b, d2 = c, d3 = a;
			} else { 
				cout << "cba" << endl;
				d1 = c, d2 = b, d3 = a;
			}
		}
	}

	cout << "The ranked numbers are " << d1 << d2 << d3 << endl;

	return 0;
}
