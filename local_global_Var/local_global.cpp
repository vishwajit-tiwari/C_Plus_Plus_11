/**
 * @brief A program to demo local and global variables access and scope
 * @author Vishwajit Tiwari
 * @date 05/05/2024
*/

#include <iostream>

using namespace std;

// global variable
int c = 50;

int main()
{
    cout<<"Inside "<<__FUNCTION__<<"()"<<endl;

    int a, b, c;

    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    c = a + b;

    cout<<"Value of c = "<<c<<endl;
    cout<<"Value of global c = "<<::c<<endl;

    return 0;
}