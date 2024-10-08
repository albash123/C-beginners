// lecture_1classmemberfunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class Student {

private :
    int rollnumb = 10;
    int num = 19;

public:
    void display() {

        cout << "the roll number inside the class  is " << rollnumb<<endl;

    }
    void show();


};

void Student::show() {

    cout << "the roll number for the class used outside the class is " <<num << endl;



}

int main()
{
    
    Student s;
    s.display();
    s.show();



}
