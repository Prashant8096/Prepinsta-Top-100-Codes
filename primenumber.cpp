#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        if (n % i == 0)
            count += 1;
    }
    if (n == 0 || n == 1)
    {
        cout << "The given number is " << n << " is not prime" << endl;
    }
    else if (count > 2)
    {
        cout << "The given number is " << n << " is not prime" << endl;
    }
    else
    {
        cout << "The given number is " << n << " is prime" << endl;
    }
    return 0;
}