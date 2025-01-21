/**
 * @brief auto with iterators
 * @author Vishwajit Tiwari
 * @date 22-01-2025
 */

#include <iostream>
#include <vector>

using namespace std;


int main() {

    vector<int> numbers = {1, 2, 3, 4, 5};

    for (auto iterator = numbers.begin(); iterator != numbers.end(); iterator++) 
    {
        cout<< *iterator<< " ";
        if(iterator == (numbers.end()-1))
        {
            cout<<endl;
        }
    }
    return 0;
}