#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    for(int i=2; i<=n/2; i++){

        if(n%i!=0){
            if(i==n/2){
                cout<<n<<" is a Prime Number"<<endl;
                break;
        
            }
        } else {
            cout<<n<<" is Not a Prime Number"<<endl;
            break;
        }
    }


}