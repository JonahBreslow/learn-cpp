#include <iostream>

using namespace std;

int main (){
    // interesting quirk about how incrementors/decrementors work
    int x = 3;
    int y = ++x; // first increments x, THEN assigns the x value to y
    cout << "when x = 3 and y = ++x, then" << endl;
    cout << "x has value: ";
    cout << x << endl;
    cout << "y has value: ";
    cout << y << endl;

    x = 3;
    y = x++; // assigns x value to y, THEN increments it
    cout << "when x = 3 and y = x++, then" << endl;
    cout << "x has value: ";
    cout << x << endl;
    cout << "y has value: ";
    cout << y << endl;

    // conditional ternary operator
    /*
    condition ? true_result : false_result
    */
    int a = 2;
    int b = 7;
    auto c = (a>b) ? a : b;
    
    cout << c << endl;

    // Logical Operators
    /*
    && - and
    || - or
    !  - not
    */

    //there are the standard bitwise operations
    /*
    & - AND
    | - inclusive OR
    ^ - exclusive OR
    ~ - NOT
    << - Shift Left
    >> - Shift right
    */


    // Type casting
    int i;
    float f = 420.69;
    i = (int) f; // equivalent to i = int (f)
    cout << i << endl;
    cout << f << endl;
    i = char (f); // notice how this doesn't work
    cout << i << endl;

    // sizeof operator
    /*
    This operator returns the size, in bytes, of that type or object.

    This value is always determined during compile time and is therefore
    determined before execution.
    */
    x = sizeof(char);
    cout << x << endl;
    x = sizeof(f);
    cout << x << endl;

}