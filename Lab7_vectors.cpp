// Lab7_vectors.cpp
// This program shows some simple vector examples, and asks for simple tasks.
// Reference: Lippman, section 3.3

// Author: Luis Rivera

// IMPORTANT NOTE: YOU MAY NEED TO COMPILE ADDING THE FOLLOWING FLAG: -std=c++11
//                 OR: -std=c++0x
// Example:  g++ Lab7_vectors.cpp -o Lab7_vectors -std=c++11
//      or:  g++ Lab7_vectors.cpp -o Lab7_vectors -std=c++0x
// Some initialization methods and other things are not supported by the old standard.

#include <iostream>
#include <vector>

using namespace std;

// Main function. Shows a few examples. Complete the assignments stated in the comments.
int main()
{
	vector<int> ivec1(5), ivec2;
	vector<double> dvec1{5.1}, dvec2(5,1.5);
	vector<string> svec1 = {"hello", "world"};
	// vector<myClass> myCvec;	// you can have vectors of objects
	// in general: vector<Type> vec;	// vector is a template

	for(int i = 0; i < ivec1.size(); i++)
		cout << ivec1[i] << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:ivec1)	// This is equivalent to the above for loop
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:dvec1)
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:dvec2)
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:svec1)
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
		
	cout << "Original size: " << ivec2.size() << endl;
	ivec2.push_back(50);
	cout << "New size: " << ivec2.size() << "\nAdded element: " << ivec2[0] << endl;
	cout << "\n------------------------------------------------------------------" << endl;
		
// ***********************************************************************
// Try all the ways to initializa a vector shown in Table 3.4. Use the
// vectors above and/or declare new vectors.
// Some of those operations have already been used, but write your
// own examples.

// Do exercises 3.14 and 3.15 from Lippman (page 102)

// Try all the vector operations shown in table 3.5. Use the vectors above
// or define new ones. Try different types.
// ***********************************************************************
	int n = 0;


	vector<int> v1;
	vector<int> v2(v1);
	vector<int> v3 = v2;
	vector<string> v4(5,"defaultString");
	vector<int> v5(5);
	vector<int> v6{1,2,3,4,5,6};
	vector<int> v7 = {7,8,9};
	
	for(int i = 0; i < 5; i++){
		cout << "Please input element " << n << " for the vector" << endl << "> ";
		cin >> v5[n] ;
		cin.ignore();
		n++;
	}
	n=0;
	for(int i = 0; i < 5; i++){
		cout << "v5[" << n << "] = " << v5[n] << endl;
		n++;
	}
	
	cout <<endl <<endl <<endl;
	
	for(int i = 0; i < 5; i++){
		cout << "Please input string number " << n << " for the vector" << endl << "> ";
		cin >> v4[n] ;
		//cin.ignore();
		n++;
	}
	n=0;
	for(int i = 0; i < 5; i++){
		cout << "v4[" << n << "] = " << v4[n] << endl;
		n++;
	}
	
	
	cout <<endl <<endl <<endl;
	
	if(v1.empty())
		cout << "v1 is empty!" <<endl;
	else
		cout << "v1 is Not empty!" <<endl;
	
	cout << "v3 has " << v3.size() << " element(s)" << endl;
	
	v5.push_back(8);
	
	int x = v5[4];
	
	v5 = v6;
	
	v6 = {8,9,1,3,4};
	
	if(v5 == v6)
		cout << "v5 equals v6!" <<endl;
	if(v5 != v6)
		cout << "v5 does Not equal v6!" <<endl;
	if(v5 < v6)
		cout << "v5 < v6!" <<endl;
	if(v5 > v6)
		cout << "v5 > v6!" <<endl;
	

	return 0;
}