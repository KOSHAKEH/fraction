#include <iostream>
#include <string>
#include "fraction.h"
using namespace std;

//   _________________________________________________________________________________
//  |                                                                                 |
//  |         ЭТОТ КЛАСС/ПРОГРАММА НЕ УМЕЮТ СОКРАЩАТЬ ДРОБИ                           |
//  |                                                                                 |
//  |_________________________________________________________________________________|

int main()
{
    setlocale(LC_ALL, "Russian");
    fraction Fraction;

    Fraction.Input();
    Fraction.choice();
}
