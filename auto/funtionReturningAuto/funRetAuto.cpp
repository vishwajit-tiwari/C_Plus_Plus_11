
#include <iostream>

using namespace std;

// Function returning auto
auto add(int a, int b)
{
    return a+b;
}


int main() 
{
    auto sum = add(10, 20);

    cout << "Sum: " << sum << endl;
}