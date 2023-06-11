#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter First Number:";
    cin >> num1;
    cout << "Enter the Second Number:";
    cin >> num2;
    if(num1==num2){
        cout<<"Both are equal";
    }
    else if (num1<num2)
    {
        cout<<num2 <<" greater than "<< num1;
    }
    else{
        cout<<num1 <<" greater than "<< num2;
    }
    

    return 0;
}