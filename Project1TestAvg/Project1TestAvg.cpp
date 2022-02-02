// Trevor Rock
// DATE: 02.02.2022
// CISP 1032 N01
// title; in class project
// Project1TestAvg.cpp : This file contains the 'main' function. Program execution begins and ends there.
//this program asks for name and five test scores then averages those 5 scores and displays name and test averages

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	float test1, test2, test3, test4, test5, avg;
	string name;
	cout << "Enter your name";
	getline(cin, name);

	cout << "Enter your first test score";
	cin >> test1;
	
	cout << "Enter your second test score";
	cin >> test2;
	
	cout << "Enter your third test score";
	cin >> test3;
	
	cout << "Enter your fourth test score";
	cin >> test4;
	
	cout << "Enter your fifth test score";
	cin >> test5;
	
	avg = (test1 + test2 + test3 + test4 + test5) / 5;
	
	cout << setprecision(2) << fixed <<name + ", "<< avg;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
