//
//  main.cpp
//  Module 3 CT
//
//  Created by Kaley Schlimgen on 1/30/25.
//
// Program:
// Create a C++ program that asks the user to enter three integer values as input.
// Store the values into three different variables.
// For each vairable, create an integer pointer to dynamic memory.
// Display the contents of the vairables and pointers.
// Be sure to use the new operator and delete operators to manage memory.
//

#include <iostream>
//using namespace std;

int main(int argc, const char * argv[]) {
    
    int num1, num2, num3;
    
    std::cout<<"Enter three integers: "<<std::endl;
    std::cin>>num1>>num2>>num3;
    
    
    std::cout<<"You entered: "<<num1<< ", " <<num2<< " & " <<num3<<std::endl;
    
    return 0;
}
