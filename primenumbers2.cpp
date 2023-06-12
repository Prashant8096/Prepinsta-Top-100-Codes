#include <bits\\stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int lower, upper;
    cout << "Enter the lower number: ";
    cin >> lower;
    cout << "Enter the upper number: ";
    cin >> upper;
    for (int i = lower; i <= upper; i++)
        if (isPrime(i))
            cout << i << " " << endl;
}