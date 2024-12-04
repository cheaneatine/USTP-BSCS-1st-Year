/*
+-----------------------------------------+
|                 main()                  |
+-----------------------------------------+
| - word1: string                         |
| - word2: string                         |
+-----------------------------------------+
| + main(): int                           |
+-----------------------------------------+
		|
		|
        V
+-----------------------------------------+
|             isAnagram                   |
+-----------------------------------------+
| + isAnagram(s1: const string&,          |
|             s2: const string&): bool    |
+-----------------------------------------+
*/

#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(const string& s1, const string& s2) {	// sa isAnagram nga function, ga take ta ug duha ka words as input and returns a true or false value.
	if(s1.length() != s2.length()) {					// inside the function, gina check ang length sa duha ka strings if same ba sila or dili. if lahi-lahi,
		return false;									// then gina return as false. although, if same sila ug length, gina return as true.
	}
	
	string sorted_s1 = s1;								// nag use ko ug algorithm header para ma-use nako ang sort function, basically gina sort ang
	string sorted_s2 = s2;								// strings into alphabetical order.
	sort(sorted_s1.begin(), sorted_s1.end());
	sort(sorted_s2.begin(), sorted_s2.end());
	
	return (sorted_s1 == sorted_s2);					// after ma sort ang duha ka strings, and dili sila the same, the function returns false.
}														// if same, then ga return as true.

int main() {
	string word1, word2;
	
	cout << "Enter a string s1: ";
	cin >> word1;
	cout << "Enter a string s2: ";
	cin >> word2;
	
	if(isAnagram(word1, word2)) {						// ginacall ang IsAnagram function para i-check if both strings are anagrams or not.
		cout << word1 << " and " << word2 << " are anagrams." << endl;
	} else {
		cout << word1 << " and " << word2 << " are not anagrams." << endl;
	}
	
	return 0;
}