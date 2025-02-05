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
    int *ptr1;
    int *ptr2;
    int *ptr3;
    
    int num1, num2, num3;
    std::cout<<"Enter three integers: "<<std::endl;
    std::cin>>num1>>num2>>num3;
    
    ptr1 = new int(num1);
    ptr2 = new int(num2);
    ptr3 = new int(num3);
    
    std::cout<<"Contents of Variables: "<<num1<< ", " <<num2<< " & " <<num3<<std::endl;
    
    std::cout<<"Contents of Pointers: "<<*ptr1<< ", " <<*ptr2<< " & " <<*ptr3<<std::endl;
    
    delete ptr1;
    delete ptr2;
    delete ptr3;
    
    return 0;
}
