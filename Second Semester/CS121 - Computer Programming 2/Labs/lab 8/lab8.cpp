/*
----------------------
|        Poly        |
----------------------
| - a: double        |
| - b: double        |
| - c: double        |
----------------------
| + Poly()           |
| + Poly(a: double,  |
|        b: double,  |
|        c: double)  |
| + operator+(other: |
|   const Poly&)     |
| + print(output:    |
|   ostream&) const  |
----------------------
         |
         |
         V
-----------------------
|     ostream         |
-----------------------
| + operator<<(       |
|   output: ostream,  |
|   poly: const Poly& |
| )                   |
-----------------------
*/

#include <iostream>
#include <ostream>
using namespace std;

class Poly {
private:
  double a;      // a, b, and c kay ang mga coefficients
  double b;
  double c;

public:
  Poly() : a(0.0), b(0.0), c(0.0) {}
  Poly(double a, double b, double c) : a(a), b(b), c(c) {}

  Poly operator+(const Poly& other) {     // Kani nga function kay ginagamit para i-add ang duha polynomials.
    double sumA = this->a + other.a;      // It takes another Poly object as input and adds its coefficients to the coefficients of the current polynomial. 
    double sumB = this->b + other.b;
    double sumC = this->c + other.c;
    return Poly(sumA, sumB, sumC);       // Then gareturn ni siya as a new Poly nga ga represent as the sum sa duha ka polynomials.
  }

  void print(ostream& output) const {
    bool isFirstTerm = true;

    if (a != 0.0) {                     // Gina check if ang poly is not equal to zero, if not then naay x^2 term sa polynomial.
      output << a << "x^2";
      isFirstTerm = false;
    }

    if (b != 0.0) {                     // same sa first condition, if dili siya equal to zero then naay x term sa polynomial.
      if (isFirstTerm) {                // gina-check if ang first term is being printed.
        output << b << "x";             // if it is, then i-print as coefficient b and term x.
        isFirstTerm = false;
      } else {                          // If it's not, then i-check niya ang sign sa coefficient b to determine if i-print as a plus sign or a minus sign. 
        if (b > 0.0)
          output << " + " << b << "x";
        else
          output << " - " << -b << "x";
      }
    }

    if (c != 0.0) {                     // same as the first two conditions, if dili siya zero then naay constant term.
      if (isFirstTerm) {                // gina-check if ang first term is being printed.
        output << c;                    // if it is, then i-print only coefficient c.
      } else {                          // if not, check ang sign sa coefficient c to determine if i-print as a plus sign or a minus sign. 
        if (c > 0.0)
          output << " + " << c;
        else
          output << " - " << -c;
      }
    }
  }
};

ostream& operator<<(ostream& output, const Poly& poly) {
  poly.print(output);
  return output;
}

int main() {                            // naay duha ka Poly with different coefficients, and the third one is the sum.
  Poly q1(-8.0, 9.0, 2.0);
  Poly q2(11.0, 3.0, 5  .0);
  Poly sum;

  sum = q1 + q2;                        // ang coefficients sa q1 and q2 kay gi-add together to get the coefficients of sum.

  cout << "q1: " << q1 << endl;
  cout << "q2: " << q2 << endl;
  cout << "Sum: " << sum << endl;

  return 0;
}