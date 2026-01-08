#include <iostream>
#include <string> 
using namespace std;

class Student {
public:
    string name;
    int roll_no;
    float cgpa;
    int arr[5];
    bool hasMarks;

    // Default constructor
    Student() {
        hasMarks = false;
    }

    // Parameterized constructor (without marks)
    Student(string n, int r, float c) {
        name = n;
        roll_no = r;
        cgpa = c;
        hasMarks = false;
    }

    // Parameterized constructor (with marks)
    Student(string n, int r, float c, int marks[5]) {
        name = n;
        roll_no = r;
        cgpa = c;
        hasMarks = true;
        for (int i = 0; i < 5; i++) {
            arr[i] = marks[i];
        }
    }
};

// Print function
void print(const Student &s) {
    cout << "Name of student is: " << s.name << endl;
    cout << "Roll number of student is: " << s.roll_no << endl;
    cout << "CGPA of student is: " << s.cgpa << endl;

    // Print marks ONLY if they exist
    if (s.hasMarks) {
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << s.arr[i] << " ";
        }
        cout << endl;
    }

    cout << endl;
}

int main() {

    Student s1("Ankit", 23, 9.1);
    print(s1);

    Student s2;
    s2.name = "Disha";
    s2.roll_no = 47;
    s2.cgpa = 9.6;
    print(s2);

    int marks[5] = {85, 90, 78, 92, 88};
    Student s3("Rohan", 12, 8.9, marks);
    print(s3);

    Student s4 = s1; // Copy constructor
    s4.name = "Modified Name";
    print(s4);
    print(s1); // Original remains unchanged 
   // its a deep copy

   Student s5(s3); // Copy constructor
   s5.name = "Another Modified Name";
   
   print(s5);
    print(s3); // Original remains unchanged
    // its a deep copy
    return 0;
}
