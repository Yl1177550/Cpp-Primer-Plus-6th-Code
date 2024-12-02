//2.7.7.cpp -- Display the correct time by inputting hours and minutes
#include<iostream>
void ShowTime(int, int);

int main()
{
    using namespace std;
    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    ShowTime(hours, minutes);

    return 0;
}

void ShowTime(int h, int m)
{
    using namespace std;
    if(m < 0 || m > 59)
    {
        cout << "Error: Minutes must be between 0 and 59." << endl;
        return;
    }
    cout << "Time: " << h << ":" << m << endl;
}

//running result:
// Enter the number of hours: 9
// Enter the number of minutes: 28
// Time: 9:28

// Enter the number of hours: 9
// Enter the number of minutes: 68
// Error: Minutes must be between 0 and 59.

