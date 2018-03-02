//
//  main.cpp
//  Cout
//
//  Created by Joyce Poon on 2018-03-01.
//  Copyright © 2018 Joyce Poon. All rights reserved.
//

#include <iostream>
#include <stdio.h>   // for printf() and scanf()
using namespace std;

int main() {
    
    cout << "Just Typing Something" << endl;
    cout << "Here" << endl;
    // print the two msg in two seperate lines
    
    
    cout << "Hello World ";
    cout << "with Another Output" << endl;
    // print the two msg in one line
    
    
    cout << endl; // used to create new line
    cout << "Hello World again" << "!" << endl;
    cout << endl; // used to create new lineß
    cout << "Hello~~~" << endl;
    // print the two msg in every other lines
    
    
    // used printf() in C
    cout << endl;
    printf("%d\n", 10);           // print Int
    printf("%f\n", 10.23454);     // print Float
    printf("%c\n", 'A');          // print Char, must use ' ', not " "
    printf("%s\n", "C++");        // print Str
    
    
    cin.get(); // display result
    
    
    return 0;
}
