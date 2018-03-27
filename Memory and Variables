//
//  main.cpp
//  Memory and Variable
//
//  Created by Joyce Poon on 2018-03-25.
//  Copyright © 2018 Joyce Poon. All rights reserved.
//

#include <iostream>
#include <climits>    // for sizeof() // new version   (in C++)
#include <limits.h>   // for sizeof() // older version (in C)
#define number 4
using namespace std;

int main() {
    int testing_number;
    
    cout << "Print number: " << number << endl;
    // define by myself earlier by #define
    
    cout << endl;
    
    cout << "The size of testing_number before assigning: ";
    cout << sizeof(testing_number) << " bytes" << endl;
    
    cout << endl;
    
    cout << "Enter a number: \n";
    cin >> testing_number;
    cout << "The size of testing_number after assigning: ";
    cout << sizeof(testing_number) << " bytes" << endl;
    
    cout << endl;
    
    cout << "Show the size of int, short and long!\n";
    cout << "size of int: " << sizeof(int) << " bytes" << endl;
    cout << "size of short: " << sizeof(short) << " bytes" << endl;
    cout << "size of long: " << sizeof(long) << " bytes" <<endl;
    cout << "size of longlong: " << sizeof(long long) << " bytes" << endl;
    
    cout << endl;
    
    int max_int(INT_MAX);
    short max_short(SHRT_MAX);
    long max_long(LONG_MAX);
    // INT_MAX, SHRT_MAX and LONG_MAX are defined in climits file
    // int maxint(some number)  =>  new assigement method
    
    cout << "Show the max value of int, short and long!\n";
    cout << "The max of int: " << max_int << endl;
    cout << "The max of short: " << max_short << endl;
    cout << "The max of long: " << max_long << endl;
    
    cout << endl;
    
    int min_int = INT_MIN;
    short min_short = SHRT_MIN;
    long min_long = LONG_MIN;
    // INT_MIX, SHRT_MIX and LONG_MIX are defined in climits file
    
    cout << "Show the min value of int, short and long!\n";
    cout << "The min of int: " << min_int << endl;
    cout << "The min of short: " << min_short << endl;
    cout << "The min of long: " << min_long << endl;
    
    cout << endl;
    
    cout << "Bits per btye: " << CHAR_BIT << endl;
    
    return 0;
}
