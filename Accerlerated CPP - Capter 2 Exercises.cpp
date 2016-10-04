// Accerlerated CPP - Capter 2 Exercises.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using std::cin;		using std::endl;
using std::cout;	using std::string;
using std::flush;

int main()
{
	
	//2.0
	cout << "Please enter your first name: ";

	string name;
	cin >> name;

	const string greeting = "Hello, " + name + "!";

	const int pad1 = 1;
	const int pad2 = 0;
	const int pad3 = 3;

	const int rows1 = pad1 * 2 + 3;
	const int rows2 = pad2 * 2 + 3;
	const int rows3 = pad3 * 2 + 7;

	const string::size_type cols1 = greeting.size() + pad1 * 2 + 2;
	const string::size_type cols2 = greeting.size() + pad2 * 2 + 2;
	const string::size_type cols3 = greeting.size() + pad3 * 2 + 2;
	cout << endl;

	
	//invariant: we have written r rows so far
	for (int r = 0; r != rows1; ++r) {
		string::size_type c = 0;

		//invariant: we have writted c characters so far in the current row
		while (c != cols1) {
			// is it time to write the greeting?
			if (r == pad1 + 1 && c == pad1 + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				//are we on the border?
				if (r == 0 || r == rows1 - 1 ||
					c == 0 || c == cols1 - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}
	
	//2.1
	for (int r = 0; r != rows2; ++r) {
		string::size_type c = 0;

		//invariant: we have writted c characters so far in the current row
		while (c != cols2) {
			// is it time to write the greeting?
			if (r == pad2 + 1 && c == pad2 + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				//are we on the border?
				if (r == 0 || r == rows2 - 1 ||
					c == 0 || c == cols2 - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}

	//2.2
	for (int r = 0; r != rows3; ++r) {
		string::size_type c = 0;

		//invariant: we have written c characters so far in the current row
		while (c != cols3) {
			// is it time to write the greeting?
			if (r == (rows3/2) && c == pad3 + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				//are we on the border?
				if (r == 0 || r == rows3 - 1 ||
					c == 0 || c == cols3 - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}

	//2.3
	cout << "How much spacing would you like between the frame and the greeting? Enter the number of spaces: " << flush;
	int userSpacing;
	cin >> userSpacing;

	const int pad4 = userSpacing;
	const int rows4 = pad4 * 2 + 3;
	cout << "Howdy, now then.. What is your name?" << flush;
	string name2;
	cin >> name2;
	const string greeting2 = "Howdy, " + name2 + "!";
	const string::size_type cols4 = greeting2.size() + pad4 * 2 + 2;

	for (int r = 0; r != rows4; ++r) {
		string::size_type c = 0;

		//invariant: we have writted c characters so far in the current row
		while (c != cols4) {
			// is it time to write the greeting?
			if (r == (rows4 / 2) && c == pad4 + 1) {
				cout << greeting2;
				c += greeting2.size();
			}
			else {
				//are we on the border?
				if (r == 0 || r == rows4 - 1 ||
					c == 0 || c == cols4 - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}

	//2.5
	const int squareHeight = 5;
	const int squareWidth = squareHeight*2;
	//invariant: we have written r rows so far
	for (int r = 0; r != squareHeight; ++r) {
		//invariant: we have written c characters so far in the current row
		for (int c = 0; c != squareWidth; ++c) {
			if (r == 0 || r == squareHeight - 1 ||
				c == 0 || c == squareWidth - 1) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << endl;
	const int rectangleHeight = 5;
	const int rectangleWidth = rectangleHeight*4;
	//invariant: we have written r rows so far
	for (int r = 0; r != rectangleHeight; ++r) {
		//invariant: we have written c characters so far in the current row
		for (int c = 0; c != rectangleWidth; ++c) {
			if (r == 0 || r == rectangleHeight - 1 ||
				c == 0 || c == rectangleWidth - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << endl;
	const int triangleHeight = 9;
	const int triangleWidth = triangleHeight * 2;
	int middle;
	int middleCheck = 0;
	middle = triangleHeight;
	
	cout << middle << endl;

	//invariant: we have written r rows so far
	for (int r = 0; r != triangleHeight; ++r) {
		//invariant: we have written c characters so far in the current row
		for (int c = 0; c != triangleWidth; ++c) {
			if (r == triangleHeight - 1 ||
				c == middle + middleCheck ||
				c == middle - middleCheck) {
				cout << "*";
			} else{
				cout << " ";
			}
			
		}
		middleCheck += 1;
		cout << endl;
	}

	//2.6
	//Counts from 1-10.

	//2.7
	int count = 10;
	while (count >= -5) {
		cout << count << endl;
		--count;
	}

	//2.8
	int sum = 1;
	for (int count = 1; count < 10; ++count) {
		sum *= count;
		cout << sum << endl;
	}

	//2.9
	cout << "Write your first number: ";
	int userInt1;
	cin >> userInt1;
	cout << "Write your second number: ";
	int userInt2;
	cin >> userInt2;
	cout << endl;

	if (userInt1 - userInt2 < 0) {
		cout << "The second number is larger.";
	}
	else if (userInt1 - userInt2 > 0) {
		cout << "The first number is larger.";
	}
	else {
		cout << "The numbers are equal.";
	}
	cout << endl;

	//2.10
	//"using std::cout" - we create a definition "cout" that is a copy of "std::cout".
	//"cout" - writes to the output stream
	//"std:: cout << std::endl;" - writes an end-line to the output stream

	return	0;
}

