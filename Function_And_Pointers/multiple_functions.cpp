


#include <iostream>

using namespace std;

void usa() {
    cout << "Hello from USA" << endl;
}

void india() {
    cout << "Hello from India" << endl;
    usa(); // inside india function, calling usa function  
  }
  // completely valid to call one function from another function

int main() {
      
    india(); // Function call

    return 0; // good practice to return 0 from main
}