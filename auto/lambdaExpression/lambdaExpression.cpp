
#include <iostream>

using namespace std;

// Lambda expression
auto multiply = [](double a, double b) 
{
    return a * b;
}; 

int main() {
    
    auto product = multiply(2.8, 4.0);

    cout <<"product = "<<product<<endl;

    return 0;
}