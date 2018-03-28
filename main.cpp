//
//  main.cpp
//  Constant
//
//  Created by Joyce Poon on 2018-03-27.
//  Copyright © 2018 Joyce Poon. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
   
    int donut = 132;
    int candy = 071;
    int chocolate = 0x13F;
    int coffee = 0xA;
    
    cout << "The number of donut: " << donut << endl;
    cout << "The number of candy: " << candy << endl;
    cout << "The number of chocolate: " << chocolate << endl;
    // donut, candy and chocolate are printed in dec
    
    cout << endl;
    
    cout << dec;     // change the base to dec (actually not necessary here)
    cout << "The number of donut in dec: " << donut << endl;
    cout << oct;     // change the base to oct
    cout << "The number of candy in oct: " << candy << endl;
    cout << hex;     // change the base to hex
    cout << "The number of candy in hex: " << chocolate << endl;
    
    cout << "The number of coffee in ??: " << coffee << endl;
    // if no further changes, the effect of "base 16" continues
    // still prints a base 16 number
    
    return 0;
}
