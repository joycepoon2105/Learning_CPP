//
//  main.cpp
//  Cin
//
//  Created by Joyce Poon on 2018-03-13.
//  Copyright © 2018 Joyce Poon. All rights reserved.
//

#include <iostream>
#include <stdio.h>   // for printf() and scanf()
using namespace std;

int main() {
    
    int integer;
    int input;
    
    
    cout << "Please input an integer: " << endl;
    cin >> integer;
    cout << "The integer you input is " << integer << endl;
    
    cout << endl;
    
    printf("%s\n","Just want to try out scanf, entry a number:");
    scanf("%d", &input);
    printf("The number printed is %d\n", input);
    
    
    return 0;
    
}
