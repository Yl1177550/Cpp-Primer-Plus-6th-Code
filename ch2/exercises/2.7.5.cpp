//2.7.5.cpp -- Convert Celsius to Fahrenheit
// formula : F = 1.8*C + 32.0
#include<iostream>
double convert(double);

int main()
{
    using namespace std;
    double celsius;
    cout << "Please enter a Celsius value ";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << convert(celsius) << " degrees Fahrenheit." << endl;

    return 0;
}

double convert(double c)
{
    return 1.8*c+32.0;
}

//running result:
// Please enter a Celsius value 20
// 20 degrees Celsius is 68 degrees Fahrenheit.