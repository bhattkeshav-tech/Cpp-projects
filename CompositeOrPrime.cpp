#include<iostream>

using namespace std;

int main(){

      int n;
      cout<<"Enter a Number : ";
      cin>>n;
      bool flag= true; // Assume number is prime initially

      for(int i=2; i<=n/2; i++){
          if(n%i==0){
              flag=false; // Number is composite
              break;
          } 
        
    }

    if(n==1){
        cout<<n<<" is Neither Prime Nor Composite Number"<<endl;
    } else
    if(flag==true){
        cout<<n<<" is a Prime Number"<<endl;
    } else {
        cout<<n<<" is a Composite Number"<<endl;
    }





}