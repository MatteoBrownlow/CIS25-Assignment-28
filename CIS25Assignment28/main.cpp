#include <iostream>
#include <sstream>
#include <iomanip>
#include "doubleToString.hpp"
using namespace myNamespace;

string doubleToString(double number);

int main(){
    double number = 0;
    cout << "Enter a number:" << endl;
    cin >> number;
    string numberString = doubleToString(number);
    cout << numberString << endl;
    return 0;
}

