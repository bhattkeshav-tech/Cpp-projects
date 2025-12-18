// take a positive integer input from the user and check whether it is a three-digit number or not.


#include<iostream>
using namespace std;  
int main(){
    int num;
    cout<<"Enter a positive integer: ";
    cin>>num;

    if(num>=100 && num<=999){
        cout<<num<<" is a three-digit number.";
    }
    else{
        cout<<num<<" is not a three-digit number.";
    }

    return 0;
}