#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input;
    input.open("lab2.txt");
    
    int lab1, lab2;
    
    input >> lab1;
    input >> lab2;
    
    cout << "The sum is: " << lab1 + lab2 << endl;
    cout << "The product is: " << lab1 * lab2 << endl;
    cout << "The average is: " << (lab1 + lab2) / 2 << endl;
    
    input.close();
         
    cout << "Finished!" << endl;
    
    return 0;
}
