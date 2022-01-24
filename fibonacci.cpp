#include <iostream>
using namespace std;

int main()
{
    int numOfFibonacciNumbers, i, fibonacciNumber;
    int fibonacciNumberMinus1 = 1;
    int fibonacciNumberMinus2 = 0;

    cout << "Please enter a positive integer greater than 1: ";
    cin >> numOfFibonacciNumbers;

    if (numOfFibonacciNumbers > 1)
    {
        for (i = 0; i < numOfFibonacciNumbers; i++)
        {
            if (i > 0)
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