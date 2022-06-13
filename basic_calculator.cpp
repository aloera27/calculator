#include <iostream>
using namespace std; 

int main() {
	int number1; 
	char op; 
	int number2; 
	
	cout << "Enter the first number: " << endl; 
	cin >> number1; 
	cout << "Enter the operator: "; 
	cin >> op; 
	cout << "Enter the second number: " << endl; 
	cin >> number2; 

	int result = 0; 

	if (op == '+') {
		result =number1 + number2; 
		cout << result; 
	}
	else if (op == '-') {
		result = number1 - number2; 
		cout << result; 
	}
	else if (op == '*') {
		result = number1 * number2; 
		cout << result; 
	}
	else if (op == '/')
	{
		result = number1 / number2; 
		cout << result; 
	}
	else {
		cout << "enter a valid value"; 
	}

	return 0; 
}