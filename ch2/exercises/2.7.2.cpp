//2.7.2.cpp -- Convert long to yards
#include<iostream>
int convert(int);

int main()
{
    using namespace std;
    int longs;
    cout << "Enter the longs: ";
    cin >> longs;
    cout << longs << " longs = " << convert(longs) << " yards." << endl;

    return 0;
}

int convert(int l)
{
    return 220*l;
}

//running result:
// Enter the longs: 20
// 20 longs = 4400 yards.