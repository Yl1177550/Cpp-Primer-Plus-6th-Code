#include<iostream>

extern int add(int a, int b);

int main()
{
    int x=5;
    int y=4;
    std::cout<< "sum:" << add(x,y) << std::endl;
    return 0;
}