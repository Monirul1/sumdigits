#include <iostream>
using namespace std;

int sumDigits (int n);

int main ()
{
    int n;
    
    cout << "Enter non-negative integers to find its sum: ";
    cin >> n;
    
    int sum = sumDigits(n);
    cout << " The sum of the digits is: " << sum << endl;
    
    return 0;
}

int sumDigits (int n)
{
    if ( n == 0)
        return 0;
    else
        return sumDigits(n/10) + n%10;
}

/* ----SAMPLE RUN----
 Enter non-negative integers to find its sum: 67
 The sum of the digits is: 13
 Program ended with exit code: 0
*/