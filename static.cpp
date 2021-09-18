#include<iostream>
using namespace std;

class Student {
    public :

    static int rollNumber;

    static int getRollNumber() {
        return rollNumber;
    }
};

int Student::rollNumber=0;

int main() {
    Student s;
    s.rollNumber = 101;
    cout << Student::getRollNumber() <<endl;
}