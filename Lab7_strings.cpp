// Lab7_strings.cpp
// This program shows some simple string examples, and asks for simple tasks.
// Reference: Lippman, section 3.2

// Author: Luis Rivera

// IMPORTANT NOTE: YOU MAY NEED TO COMPILE ADDING THE FOLLOWING FLAG: -std=c++11
//                 OR: -std=c++0x
// Example:  g++ Lab7_strings.cpp -o Lab7_strings -std=c++11
//      or:  g++ Lab7_strings.cpp -o Lab7_strings -std=c++0x
// Some initialization methods and other things are not supported by the old standard. 

#include<iostream>
#include<string>
#include<stdio.h>
#include<ctype.h>

using namespace std;

// Main function. Shows a few examples. Complete the assignments stated in the comments.
int main()
{

	string s1, s2("Hello"), s3 = "World";
	cout << "\nEnter a word:" << endl;
	cin >> s1;
	cin.ignore();	// to consume the '\n' character. Otherwise, you may get issues with
					// the getline() below. Try commenting this out. Any issues?
	
	string s4(s1);
	
	cout << s1 << endl
		 << s2 << endl
		 << s3 << endl
		 << s4 << endl;
	
	s1 = s2 + s3;
	cout << s1 << endl;

// ***********************************************************************
// Try all the operations in Table 3.2 using the strings above and
// using new strings that you may declare.
// Some of those operations have already been used, but write your
// own examples.
// ***********************************************************************
	cout << endl << endl << endl;
	// os << s
	cout << "This is s1: " << s1 << endl; 

	//is >> s
	cout <<"\nPlease input a new string: ";
	cin >> s1;
	cin.ignore();
	cout <<"The string you entered is: " << s1 << endl;

	//getline(is,s)
	cout <<"\nPlease input a different string: ";
	getline(cin,s1);
	cout <<"The string you entered is: " << s2 << endl;

	//s.empty()
	cout <<"Checking to see if s1 is empty..." << endl;
	if(s1.empty())
		cout << "s1 is empty!" << endl;
	else
		cout << "s1 is Not empty!" << endl;

	//s.size()
	cout << "The size of s1 is: " << s1.size() << endl;

	//s[n]
	int n = 0;
	cout << "What location would you like to reference in s1: " << s1 << endl << "> ";
	cin >> n;
	cin.ignore();
	char c = s1[n];
	cout << "The character at position " << n << " is " << c <<".\n";

	//s1+s2
	cout << "Enter a string to be concatenated with s1." << endl << "> ";
	cin >> s2;
	cin.ignore();
	s3 = s1 + s2;
	cout << "The concatenated string is: " << s3 << endl;

	//s1 = s2
	cout << endl << "s1: " << s1 << endl << "s2: " << s2 << endl << "s1 will now be coppied into s2." << endl;
	s2 = s1;
	cout << endl << "s1: " << s1 << endl << "s2: " << s2 << endl;

	//s1 == s2
	cout << endl << "We will now check if s1 is the same as s2" << endl;
	if(s1 == s2)
		cout << "The strings match!" << endl;
	if(s1 != s2)
		cout << "The strings do Not match!" << endl;

	//s1 < s3
	cout << endl << "We will now compare s1 to s3." <<endl;
	if(s1 < s3){
		cout << s1 << " < " << s3 <<endl;
		cout << "s1 < s3" << endl;
	}
	else{
		cout << s1 << " > " << s3 <<endl;
		cout << "s1 > s3" << endl;
	}
// -----------------------------------------------------------------------

	string line;
	cout << "\nEnter some text:" << endl;
	getline(cin, line);
	cout << line << endl;
	
	cout << "\nEnter some text, finish it with an &:" << endl;
	getline(cin, line, '&');	// the delimiter can be any character
	cout << line << endl;

// ***********************************************************************
// Use a "Range for" (Lippman, page 93) and operations in table 3.3 to:
// 1) change the case of the letters in your input line above (upper to
//    lowercase and vice-versa).
// 2) Replace any whitespace with a dot ('.').
// Print the converted text.
// ***********************************************************************
	string con;
	fflush(stdin);
	cout << endl << endl << endl;
	cout << "Please enter a string to be converted. " << endl << "> ";
	getline(cin, con);

	for(auto &c : con){	  //for every character in con
		if(c >= 'a' && c <= 'z')
			c = toupper(c);
		else 
		if(c >= 'A' && c <= 'Z')
			c = tolower(c);
		else
		if(isspace(c))
			c = '.';
	}

	cout << "This is the coverted string: " << con << endl;

	return 0;
}
