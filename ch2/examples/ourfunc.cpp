// ourfunc.cpp -- defining your own function
#include<iostream>
void simon(int); // function prototype for simon()

int main()
{
    using namespace std;
    simon(3); // call the simon() function
    cout << "Pick an integet: ";
    int count;
    cin >> count;
    simon(count);   // call int again
    cout << "Done!" << endl;

    return 0;
}

//define the simon() function
void simon(int x)
{
    using namespace std;
    cout << "Simon says touch your toes " << x << " times." << endl;
    //void functions don't need return statements
}

//running result:
// Simon says touch your toes 3 times.
// Pick an integet: 123
// Simon says touch your toes 123 times.
// Done!