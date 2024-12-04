/*
+------------------------------------+
|              main()                |
+------------------------------------+
| - numbers: vector<int>             |
| - input: int                       |
+------------------------------------+
| + removeDuplicate(vector<T>&): void|
+------------------------------------+

+------------------------------------+
|        removeDuplicate()           |
+------------------------------------+
| + v: vector<T>&                    |
+------------------------------------+
*/

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void removeDuplicate(std::vector<T>& V) {
    std::sort(V.begin(), V.end());                  // gina-organize ang numbers in ascending order.
    auto last = std::unique(V.begin(), V.end());    
    V.erase(last, V.end());                         // gina pangita ang duplicates, and then gina-remove para ipabilin ang mga distinct nga numbers.
}

int main() {
    std::vector<int> numbers;
    int input;                                      // diri gina store ang numbers

    std::cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; ++i) {
        std::cin >> input;
        numbers.push_back(input);                  // as the user inputs the numbers, gina-take ang numbers and gina-add sa list.
    }

    removeDuplicate(numbers);                      // gina call ang removeDuplicate function to check sa tanan numbers and delete ang ga-balik².

    std::cout << "Distinct integers: ";            // diri gina show ang final list, without the duplicate numbers.
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}