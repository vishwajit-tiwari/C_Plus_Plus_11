/**
 * @brief: This file contains the implementation of the templated function returning auto.
 * @author: Vishwajit Tiwari
 * @date: 23-01-2025
 */

#include <iostream>

using namespace std;

template <typename T, typename U>
auto multiply(T a, U b) -> decltype(a * b)
{
    return a * b;
}

int main()
{
    cout << "Inside "<<__FUNCTION__<<"()"<<endl;

    int x = 5;
    double y = 21.9;

    auto result = multiply(x, y);

    cout << "Result: " << result << endl;

    return 0;
}