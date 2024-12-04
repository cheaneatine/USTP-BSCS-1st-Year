/*
+-----------------------------------+
|             main()                |
+-----------------------------------+
| + counts: int*                    |
+-----------------------------------+
| + count(const string&): int*      |
| + count(const string&, int[], int)|
+-----------------------------------+
		|
		|
        V
+-----------------------------------+
|             count()               |
+-----------------------------------+
| + s: const string&                |
| + counts: int*                    |
| + size: int                       |
+-----------------------------------+
*/

#include <iostream>
using namespace std;

int* count(const string& s) {               // sa count function, gi take ang sentence as input and ginacount ikapila nakita ang mga digits.
    int* counts = new int[10];              
    for (int i = 0; i < 10; i++) {
        counts[i] = 0;
    }
    for (int i = 0; i < s.length(); i++) {  // para ma count ang digits, ga go through each character sa sentence para ma check if kani ba nga
        if (isdigit(s[i])) {                // character kay number, if not, gina-increase ang count sa number sa array.
            counts[s[i] - '0']++;
        }
    }
    return counts;
}

int main() {
    int* counts = count("2022304598 5cherry lee h jime7.nez");
    for (int i = 0; i < 10; i++) {
        cout << "Digit " << i << " occurs " << counts[i] << " times." << endl;
    }
}   

/*
diri sa main(), naay function nga count and gina-use ni para iihap ang digits sa sentence. once ma-receive sa function, gina
examine niya one-by-one para pangitaon ang numbers from 0 to 9. Whenever the function finds a digit in the sentence, ga-keep track ta
by incrementing on that specific digit. 
*/