// myfirst.cpp -- displays a message

#include <iostream>                             // a PREPROCESSOR directive
int main()                                      // function header
{                                               // start of function body
    using namespace std;                        // make definitions visible
    cout << "Come up and c++ me some time.";    // message
    cout << endl;                               // start a new line
    cout << "You won't regret it!" << endl;     // more output
    return 0;                                   // terminate main()
}                                               //end of function body

// 要在自己的系统上运行本书的示例，可能需要对其进行修改。有些窗口环境在独立的窗
// 口中运行程序，并在程序运行完毕后自动关闭该窗口。正如第1章讨论的，要让窗口一直打
// 开，直到您按任何键，可在return语句前添加如下语句：cin.get()
// 对于有些程序，要让窗口一直打开，直到您按任何键，必须添加两条这样的语句。第4章
// 将更详细地介绍cin.get( )。
// 如果您使用的系统很旧，它可能不支持C++98新增的特性。
// 有些程序要求编译器对C++11标准提供一定的支持。对于这样的程序，将明确的指出这一
// 点，并在可能的情况下提供非C++11代码。

// 如果已经使用过C语言进行编程，则看到cout函数（而不是printf( )函数）时可能会小吃一
// 惊。事实上，C++能够使用printf( )、scanf( )和其他所有标准C输入和输出函数，只需要包含常
// 规C语言的stdio.h文件。不过本书介绍的是C++，所以将使用C++的输入工具，它们在C版本的
// 基础上作了很多改进。