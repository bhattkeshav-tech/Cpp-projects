#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<n<<" is a Composite Number"<<endl;
            return 0;
        } else {
            cout<<n<<" is Not a Composite Number"<<endl;
            return 0;
        }
    }


}