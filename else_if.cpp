#include<iostream>
using namespace std;

int main(){

  int cp;
  cout<<"enter cost price: ";
  cin>>cp;

  int sp;
  cout<<"enter selling price: ";
  cin>>sp;
  if(sp>cp){
    cout<<"you made a profit of "<<sp-cp;
  }
  else if(cp>sp){
    cout<<"you incurred a loss of "<<cp-sp;
  }
  else{
    cout<<"no profit no loss";
  }



}