/*
+--------------------------------------------------+
|                   MyInteger                      |
+--------------------------------------------------+
|                 - value: int                     |
+--------------------------------------------------+
| + MyInteger(value: int)                          |
| + getValue(): int                                |
| + isEven(): bool                                 |
| + isOdd(): bool                                  |
| + isPrime(): bool                                |
| + equals(value: int): bool                       |
| + equals(other: MyInteger): bool                 |
+--------------------------------------------------+
| + static isEven(value: int): bool                |
| + static isOdd(value: int): bool                 |
| + static isPrime(value: int): bool               |
| + static isEven(other: const MyInteger&): bool   |
| + static isOdd(other: const MyInteger&): bool    |
| + static isPrime(other: const MyInteger&): bool  |
| + static parseInt(s: const string&): int         |
+--------------------------------------------------+                     
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class MyInteger {
private: 
    int value;                          // ga hold sa whole numbers nga akong gi input sa main()

public:
    MyInteger(int value) {              
        this->value = value;
    }

    int getValue() const {              // ginahatag ang number stored sa MyInteger.
        return value;
    }

    bool isEven() const {            
        return isEven(value);
    }

// isEven and isOdd kay ga check kung kani ba nga number gi input kay odd ba or even.

    bool isOdd() const {
        return isOdd(value);
    }

    bool isPrime() const {              // ginacheck if kani nga number kay prime.
        return isPrime(value);
    }

    bool equals(int other) const {
        return this -> value == other;
    }

    // kaning equals function, gina-compare ang MyInteger object sa another number or MyInteger object.
    // gina-check if kani ba nga value kay equal, and ga return as true if it is. If not, return as false.

    bool equals(const MyInteger& other) const {
        return this -> value == other.getValue();
    }

    static bool isEven(int value) {
        return value % 2 == 0;             // ang kani nga operator "%" kay ga check if divisible ba by 2 or dili. if equals to zero, print 0.
    }

    static bool isOdd(int value) {
        return value % 2 != 0;            // if not equals to zero, print 0.
    }

    static bool isPrime(int value) {
        if (value <= 1) {
            return false;
        }
        for (int i = 2; i <= sqrt(value); i++) {        // gina divide each number by 2 to the square root sa number.
            if (value % i == 0) {                       
                return false;                           // If it finds any factor (a number that divides evenly into the number), it returns "false."
            }
        }
        return true;                                    // otherwise, return as true.
    }

    static int parseInt(const string& s) {              // ga take ug string as an input, and gina convert to an integer.
        return stoi(s);                                 // gi-use ang stoi() function para ma perform ang conversion.
    }
};

int main() {
    MyInteger num1(15);
    MyInteger num2(10);
    MyInteger num3(22);
    MyInteger num4(7);
    MyInteger num5(21);
    MyInteger num6(8);
    

//the non static member fuction used the static member fuctions so technically both static and non static are used.

    cout << num1.getValue() << " is " << (num1.isEven() ? "even" : "odd") << endl;
    cout << num2.getValue() << " is " << (num2.isEven() ? "even" : "odd") << endl;
    cout << num3.getValue() << " is " << (num3.isPrime() ? "prime" : "not prime") << endl;
    cout << num4.getValue() << " is " << (num4.isPrime() ? "prime" : "not prime") << endl;
    cout << num5.getValue() << " is " << (num5.isOdd() ? "odd" : "even") << endl;
    cout << num6.getValue() << " is " << (num6.isOdd() ? "odd" : "even") << endl;

    cout << num1.getValue() << " equals 5: " << num1.equals(5) << endl;
    cout << num2.getValue() << " equals " << num1.getValue() << ": " << num2.equals(num1) << endl;


    string s = "42";
    int value = MyInteger::parseInt(s);
    cout << "The integer value of " << s << endl;
}