<!-- Headings -->
# Introduction to Advance Concept of C++ Progarmming

## C++ 11

### Agenda

<!-- Unorderd List -->
1. **Uniform intializations**
    1. Initialization with curly braces
    1. std::initializer listexit
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

<!-- Fourth topic -->

#### 4. Type determination with auto, decltype and trailing return type

1. **auto**
    1. auto was redefined in c++ 11.
    1. Now used to let the compiler automatically "deduced the data type" of the declared variable or lambda expression parameter "from its initialization expression" at "compile time".
    1. Make code compact and easy.
    1. No need to explicitly specifying the type of variable on declaration. avoid writing complex type.
    1. No worry about type conversions.

    ```c++
    auto rollNo = 12345;         // Compiler deduced "int"
    auto name = "Aman";          // Compiler deduced "char const*"
    auto radius = 0.2457848;     // Compiler deduced "double"
    ```

    **Different ways of using "auto"**
    1. **With literals:** The compiler deduce the type of variable based on the literal's value.

        ```c++
        auto companyProffit = 2005643l;     // Compiler deduced "long int"
        auto bodyTemp = 98.8f;              // Compiler deduced "flaot"
        auto population = 345678ul;         // Compiler deduced "unsinged long int"
        auto name = "kite"s;                // Compiler deduced "string"
        auto result = 10+20.5;              // Compiler deduced "double"
        ```

    1. **With functions:** With functions it can be used as the return type of the function provided each return statement returns same type of variable (with c++14).

        ```c++
        auto add(int a, int b) { return a+b; }
        ```

    1. **With lambda expression:** As the return type of lambda expression provided each return statement returns same type of varaible (with c++11).

        ```c++
        auto add = [](int x, int y) { return x+y; };
        ```

    1. **With pointer and new:** The compiler deduce the type of varaible based on the literal's value.

        ```c++
        auto *ptr = new int(5);
        auto val = 1, *ptr = &val, **dblptr = &ptr;
        float a = 32.5f;
        auto *b = new auto(a);
        ```

    1. **With l-value and r-value:** The l-value refernce is used to refer a memory location that identifies an existing variable. The r-value refernce is used to refer temporary objects and literals.

        ```c++
        int num = 5;
        auto& x = num;     // l-value reference
        auto& y = 20;      // r-value refercnce
        ```

    1. **With templates, iterators and complex expressions:**

        ```c++
        Example 1. Using auto with templates

        template <typename T, typename U>
        auto multiply(T a, U b)
        {
            return a*b;
        }
        ```

        ```c++
        Example 2. Using auto with iterators

        vector<int>numbers = {1,2,3,4,5,6};
        for(auto iterator = numbers.begin(); iterator != numbers.end(); iterator++)
        {
            cout<<"iterator = "<<*iterator<<endl;
        }
        ```

    1. **Restrictions on auto:** auto variable can not be combined with other type specifier declaration.

        ```c++
        auto int a = 1;  // error! wrong!
        auto x = 1, y = 3.5  // error! wrong!
        auto *ptr = new auto(10), *y = new auto(20.5); // error!
        auto x = 1, y = 2; // ok!
        ```

        ```c++
        Identifier declared using auto must have initializer:

        auto x = x+5;  // error!
        auto x = 10;   // ok!
        auto y = 10+3  // ok!
        ```

        ```c++
        Identifier declared using auto can not be type casted, nor you can apply sizeof or typeid operator.

        (auto)x; //error!
        sizeof(auto); // error!
        
        auto x = 1;
        sizeof(x); // ok!
        ```

1. **delctype:** 
    - An operator which results in "evaluating the declared type" of an expression which acts as operand in C++ 11.
    - Assign type to a variable based on the type of specified expression.
    - "Determine the type" of an expression "dynamically at compile time".
    - Let you extract the data type from a variable/expression passed to it.

        ```c++
        int x = 10;
        decltype(x) a = x+2;    // compiler deduce int datatype
        decltype(5) a;          // compiler deduce int datatype
        decltype(5+10) b;       // compiler deduce int datatype
        decltype(int(12.5)) x;  // compiler deduce int datatype 
        ```
