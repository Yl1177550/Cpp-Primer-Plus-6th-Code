//2.7.6.cpp -- Convert light years to astronomical units
// formula : 1 light year = 63240 astronomical units
#include<iostream>
double convert(double);

int main()
{
    using namespace std;
    double light_years;
    cout << "Enter the number of light years: ";
    cin >> light_years;
    cout << light_years << " light years = " << convert(light_years) << " astronomical units." << endl;

    return 0;
}

double convert(double ly)
{
    return 63240.0*ly;
}

//running result:
// Enter the number of light years: 4.2
// 4.2 light years = 265608 astronomical units.