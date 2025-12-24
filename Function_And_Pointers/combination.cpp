#include <iostream>

using namespace std;

int factorial(int x){// function to calculate factorial of a number
    int fact=1;
    for(int i=1; i<=x;i++){ // loop from 1 to x
        fact*=i;

    }
    return fact;
}



int main(){

    int n ,r;

    cout<<"Enter value of n:  ";
    cin>>n;
    cout<<"Enter value of r:  ";
    cin>>r;

    int nfact=factorial (n);

    int rfact=factorial (r);

    int nminusrfact=factorial (n-r);

    cout<<"nCr is: "<< nfact/(rfact*nminusrfact)<<endl;


  //formula for nCr = n! / ( r! * (n-r)! )

    return 0; 


}