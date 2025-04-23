/* sd19.cpp
 * DESCRIPTION:
 * sd19.cpp is the sourcefile for sd19.
 *
 * sd19 is a test mule to explore concepts found in chapter 19 of,
 * Dmitrovic, Slobodan, Modern C++ for Absolute Beginners 1st ed.,
 * Apress, 2020.
 *
 *
 * NOTES:
 *
 * Tue 22 Apr 2025 11:57:54 PM PDT
 * version 1: main and a function. Experiment wtih pass by value.
 *
*/


#include <iostream>

int xform(int);

int main() {

    int x = 0;
    int transx = 0;

    std::cout << "Enter an integer from 0 to 100: ";
    std::cin >> x;

    transx  = xform(x);

    std::cout << "x is " << x;
    std::cout << ", the transformation of x is " << transx << "\n";




    return 0;
}

int xform(int x) {

    int xform_value = 0;

    if(x <= 40 || x >= 100) {
        xform_value = 0;
    }else{
        xform_value = 1;
    }

    return xform_value;

}


