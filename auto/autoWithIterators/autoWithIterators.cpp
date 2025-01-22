/**
 * @brief auto with iterators, vector and initializer_list
 * @author Vishwajit Tiwari
 * @date 22-01-2025
 */

#include <iostream>
#include <vector>

using namespace std;


int main() {

#ifdef VECTOR
    vector<int> numbers = {1, 2, 3, 4, 5};

    for (auto iterator = numbers.begin(); iterator != numbers.end(); iterator++) 
    {
        cout<< *iterator<< " ";
        if(iterator == (numbers.end()-1))
        {
            cout<<endl;
        }
    }

#else

    initializer_list<int> num {1, 2, 3, 4, 5};

    for (auto iterator = num.begin(); iterator != num.end(); iterator++) 
    {
        cout<< *iterator<< " ";
        if(iterator == (num.end()-1))
        {
            cout<<endl;
        }
    }

#endif

    return 0;
}