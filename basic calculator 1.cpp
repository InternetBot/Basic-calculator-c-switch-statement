#include <iostream>
#include <cmath>
using namespace std; 

int main(){

	int num1; 
	int num2; 
	char op;

	cout << "================Enter the first number================ ";
	cin >> num1;
	cout << endl;

	cout << "======Select an operator (Available operators are +, -, /, and *)====== ";
	cin >> op;
	cout << endl;

	cout << "===============Enter the second number=============== ";
	cin >> num2;
	cout << endl;

	switch (op)
	{
	case '+':
		cout << num1 << " + " << num2 << " = " << num1 + num2;
		break;

	case '-':
		cout << num1 << " - " << num2 << " = " << num1 - num2;
		break;

	case '*':
		cout << num1 << " * " << num2 << " = " << num1 * num2;
		break;

	case '/':
		cout << num1 << " / " << num2 << " = " << num1 / num2;
		break;

	default:
		cout << " Please enter one of the default operator " << endl;
		break;
	}

	return 0;
}