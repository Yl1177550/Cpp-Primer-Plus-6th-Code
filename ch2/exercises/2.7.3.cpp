//2.7.3.cpp -- function
#include<iostream>
void mice();
void run();
int main()
{
    mice();
    mice();
    run();
    run();
    return 0;
}

void mice()
{
    using namespace std;
    cout << "Three blind mice" << endl;
}

void run()
{
    using namespace std;
    cout << "See how they run" << endl;
}

//running result:
// Three blind mice
// Three blind mice
// See how they run
// See how they run