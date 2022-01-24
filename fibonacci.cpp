#include <iostream>
using namespace std;

int main()
{
    int numOfFibonacciNumbers;
    int count;
    int fibonacciNumber;
    int fibonacciNumberMinus1 = 1;
    int fibonacciNumberMinus2 = 0;

    cout << "Please enter a positive integer greater than 1: ";
    cin >> numOfFibonacciNumbers;

    if (numOfFibonacciNumbers > 1)
    {
        for (count = 0; count < numOfFibonacciNumbers; count++)
        {
            if (count > 0)
            {
                fibonacciNumber = fibonacciNumberMinus1 + fibonacciNumberMinus2;
                fibonacciNumberMinus2 = fibonacciNumberMinus1;
                fibonacciNumberMinus1 = fibonacciNumber;
                cout << fibonacciNumber << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }

    return 0;
}