#include <iostream>
using namespace std;

int main() {
	int num1, num2, product = 0;
	
	cout << "Please enter the first number: " << endl;
	cin >> num1;
	cout << "Please enter the second number: " << endl;
	cin >> num2;
	
	for (int i = 1; i <= num2; i++) {
		product = product + num1; 
	}
	
	cout << "The product is: " << product << endl;
	
	return 0;
}
