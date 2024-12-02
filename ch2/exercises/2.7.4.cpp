//2.7.4.cpp -- Calculate the number of months based on age
#include<iostream>
int convert(int);

int main()
{
    using namespace std;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You have lived " << convert(age) << " months." << endl;

    return 0;
}

int convert(int age)
{
    return 12*age;
}

//running result:
// Enter your age: 26
// You have lived 312 months.