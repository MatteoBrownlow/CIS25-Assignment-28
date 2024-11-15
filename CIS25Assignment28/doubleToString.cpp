#include <iostream>
#include <sstream>
#include <iomanip>
#include "doubleToString.hpp"
using namespace myNamespace;

string doubleToString(double number){
    stringstream stream;
    int precision = 0;
    int integer = 0;
    int multiplier = 1;
    while(true){
        integer = number * multiplier;
        if(integer != number * multiplier){
            multiplier *= 10;
            precision++;
        }
        else{
            break;
        }
    }
    stream << fixed << setprecision(precision) << number;
    string numberString = stream.str();
    return numberString;
}
