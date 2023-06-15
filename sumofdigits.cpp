#include <bits/stdc++.h>
using namespace std;
int main(){
    int num , sum=0;
    cout<<"Enter the Number : "<<endl; cin>>num;
     while(num!=0){
        sum += num % 10;
        num = num / 10;
    }
    cout<<"The sum of numbers is : "<<sum<<endl;
    return 0;
}