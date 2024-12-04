#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    
    ifstream inputfile("lab3.txt");
    
    int number, count = 0;
    bool isprime = true;
    
    while (inputfile >> number && count != 20)
    {
        
        if (!(number == 0 || number == 1))
            isprime = true;
            
            for (int i = 2; i <= number / 2; ++i)
            {
                if (number % i == 0)
                {
                    isprime = false;
                    break;
                }
            }
            
        if (isprime)
        {
            cout << number << " ";
            count++;
        }
        
    }

    inputfile.close();
    return 0;
}
