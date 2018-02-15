#include <iostream>
using namespace std;

void add_numbers(int& x, int y){
	// X is call by reference... the value of first changes each time
	x+=y;
}

int main(){
	
	int first;
	int second;
	
	cout << "Enter first number: ";
	cin >> first;
	cout << "Enter Second number: ";
	cin >> second;
	
	add_numbers(first,second);
	cout << "The first time calling add_numbers is: " << first << endl;
	
	add_numbers(second, first);
	cout << "The second time calling add_numbers is: " << first << endl;
	
	add_numbers(first,second);
	cout << "The third time calling add_numbers is: " << first << endl;
}

// CIS2013_Week05_Homework1