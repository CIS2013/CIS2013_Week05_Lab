#include <iostream>
using namespace std;

void add_numbers(int& x, int y){
	x+=y;
}

int main(){
	
	int first;
	int second;
	
	cout << "Enter first number: ";
	cin >> first;
	cout << "Enter Second number: ";
	cin >> second;
	
	add_numbers(first,second)
	cout << "The first time calling add_numbers is: " << first << endl;
	
	add_numbers(first,second)
	cout << "The second time calling add_numbers is: " << first << endl;
	
	add_numbers(first,second)
	cout << "The third time calling add_numbers is: " << first << endl;
}