/*
	Jimenez, Cherry Lee H.
	CS1B
	
	Write a test program that prompts the user to enter a string and 
	displays the new sorted string.
*/

#include <iostream>
#include <algorithm>
#include <string>

	std::string sort(std::string& s) {
    std::sort(s.begin(), s.end());
    return s;
}

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string sortedString = sort(input);
    std::cout << "Sorted string: " << sortedString << std::endl;

    return 0;
}