/*
<--------------- Function Overloading-------------------------->

1.Function overloading is simple the functions with same name but different parameters or their types.

2.When function calls take place it checks the no. of parameters and their types and execute accordingly.

3.It shows compile time polymorphism.

*/
#include <iostream>
using namespace std;

class Area
{

public:
    int calculateArea(int radius)
    {
        return 3.14 * radius * radius;
    }

    int calculateArea(int length, int breadth)
    {
        return length * breadth;
    }
};

int main()
{

    Area A1, A2;

    cout << A1.calculateArea(2) << endl;
    cout << A2.calculateArea(4, 5) << endl;
}
