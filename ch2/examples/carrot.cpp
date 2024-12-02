// carrots.cpp -- food processing program
// uses and diplays a variable

#include <iostream>

int main()
{
    using namespace std;

    int carrots;    // declare an integer variable

    carrots = 25;  // assign a value to the variable
    cout << "I have ";
    cout << carrots;    // display the value of the variable
    cout << " carrots.";
    cout << endl;
    carrots = carrots -1; //modify the cariable
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;

    return 0;
}