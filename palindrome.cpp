#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, reverse, rem, temp;
    cout << "Enter the number: ";
    cin >> num;
    temp = num;

    while (num != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    };
    if (num == reverse){

        cout << num << "IS PALINDROME";}
    else
    {

        cout << num << "IS NOT A PALINDROME";}

    return 0;
}