<!-- Headings -->
# Introduction to Advance Concept of C++ Progarmming

## C++ 11

### Agenda

<!-- Unorderd List -->
1. **Uniform intializations**
    1. Initialization with curly braces
    1. std::initializer list
1. **Brace or equal initializer**
1. **Constructors**
    1. Initializer-List Constructors
    1. Inheriting Cosntructors
    1. Delegating Cosntructors
1. **Type determination with auto, decltype and trailing return type**
1. **Override**
1. **Final**
1. **Default**
1. **Delete**
1. **Type aliases**

1. **Attributes specifiers**
1. **Move constrcutors and move assignment operators**
1. **Code at compile time**
    1. Constexpr(C++ 11)
    1. static assert
1. **Lambda**
    1. Implementation Model
    1. Capture
    1. Lambda and Lifetime
    1. Mutable Lambdas
    1. Call and Return
1. **Variadic Templates**
1. **Range Based for Loops**

----------------------------------------------------------------------------

<!-- Code Blocks-->

#### Find out how many implicit conversions are involved in the following code ?

```c++
#include <iostream>

short int max(short int a, short int b)
{
    return (a > b ? a : b);
}

void driver()
{
    short int i = 1;
    unsigned int j = 65123;
    std::cout << max(i,j) << std::endl;
}

int main()
{
    driver();
    return 0;
}
```

<!-- First Topic -->

#### 1. Why Uniform Initializations ?

1. Initialization with C++98/C++03

```c++
int a1;   // undefined value
int a2 = 10.5;   // intializes with 10
int values[] = {1,2,3};   // intialization of aggregates
```
