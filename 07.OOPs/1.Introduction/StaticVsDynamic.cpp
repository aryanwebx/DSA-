/*
<-------------------------- Static and Dynamic Memory Allocation ------------------------------------>
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int roll_number;
    int age;
};


int main(){

    //static Memory Allocation
    Student s1;
    s1.name="Aryan";
    s1.age=21;
    s1.roll_number=1;

    //Dynamic Memory Allocation
    Student *s2=new Student;
    (*s2).name="Mohit";
    s2->age=23;
    s2->roll_number=2;

    cout<<s2->name;
    
}
