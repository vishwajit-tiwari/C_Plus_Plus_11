/**
 * @brief Auto with pointers and new
 * @author Vishwajit Tiwari
 * @date 22-01-2025
 */

#include <iostream>

using namespace std;

int main()
{
    cout<<"Inside "<<__FUNCTION__<<"()"<<endl;

    // auto with pointers and new

    auto *ptr = new int(10);
    cout << "Value of ptr: " << *ptr << endl;
    delete ptr;

    auto val = 1;
    auto *ptr1 = &val;
    auto *dblp = &ptr1;
    cout << "Value of ptr1: " << *ptr1 << endl;
    cout << "Value of dblp: " << **dblp << endl;

    float a = 32.5f;
    auto *ptr2 = new auto(a);
    cout << "Value of ptr2: " << *ptr2 << endl; 
    delete ptr2;

    return 0;
}