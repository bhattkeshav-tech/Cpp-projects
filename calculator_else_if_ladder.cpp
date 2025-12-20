#include<iostream>

using namespace std;

int main(){

      float n1;
      cout << "Program Started..." << endl;
      cout<<"Enter first number: ";
      cin>>n1;
      float n2;
      cout<<"Enter second number: ";
      cin>>n2;
      char op;
      
      cout<<"Enter operation (+, -, *, /): ";
      cin>>op;
      
      if(op=='+'){
        cout<<n1+n2<<endl;
      }
      else if(op=='-'){
        cout<<n1-n2<<endl;
      }
      else if(op=='*'){
        cout<<n1*n2<<endl;
      }
      else if(op=='/'){
        cout<<n1/n2<<endl;
      }
      else{
        cout<<"Invalid Operation"<<endl;
      }

 return 0;

}