#include<iostream>

using namespace std;
class Cricketer{
  public:
    string name;
   int runs;
   float avg;

  
    Cricketer(string name,int runs,float avg){
      this->name = name;
      this->runs = runs;
      this->avg = avg;
      this->runs = runs;
  }
    
  void printDetails() { // function inside class
      cout << "Cricketer Name: " << this->name << endl;
      cout << "Runs: " << this->runs << endl;
      cout << "Average: " << this->avg << endl;
      cout<< matchesPlayed()<< " matches played"<<endl;
  }

  int matchesPlayed() {
    return runs/avg;
  }
  };

int main(){

  Cricketer c1("Sachin Tendulkar",34357,47.5);
  Cricketer c2("Virat Kohli",24936,34.5);
  


  c1.printDetails(); // function call through object because function is inside class
  cout<<endl;
  c2.printDetails();
  cout<<endl;

 

}