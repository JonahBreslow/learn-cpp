#include <iostream>
#include <string>

using namespace std;

int main(){
    // we can use decimal, octal, or hexadecimal numbers in C++
    int a = 75;
    cout << a << endl;
    int b = 0113;
    cout << b << endl;  
    int c = 0x4b;
    cout << c << endl;
    if (a==b){
        cout << "a == b is true" << endl;
    };
    if (b==c){
        cout << "b == c is true, therefore a == c" << endl;
    };

    // we can specify int type with suffixes
    a = 75u; //unsigned int
    a = 75l; //long
    a = 75ul; //unsigned long
    a = 75lu; //unsigned long

    // we can do the same thing with floating-point numbers. default is a double
    double pi = 3.14159;
    pi = 3.14159L; // long double
    pi = 3.14159f; // float

    // boolean things
    bool foo = true;
    bool bar = false;
    int* p = nullptr; // null pointer

    // constants - these are not modifiable variables
    const double pie = 3.14159; 
    const char newline = '\n';

    double r=5; //radius
    double circle;

    circle = 2 * pie * r;
    cout << circle << endl;

    // preprocessing definitions
    /*
    these take the form:
    #define IDENTIFIER REPLACEMENT
    IDENTIFIER is replaced with REPLACEMENT before compilation to machine language 
    */
    #define PI 3.14159

    circle = 2 * PI * r;
    cout << circle << endl;
}