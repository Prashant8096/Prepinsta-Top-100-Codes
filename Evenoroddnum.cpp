#include <iostream>
using namespace std;

int main(){
    int Number;
    cout<<"Enter a Number:"<<endl;
    cin>>Number;
    if(Number % 2 ==0){
        cout<<Number <<":The given number is even";
    }else{
        cout<<Number<<":The given number is odd";
    }
    return 0;
}