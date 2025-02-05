/*
 *  main.cpp
 *  Module 3 CT
 *
 *  Created by Kaley Schlimgen on 1/30/25.
 *
 *  Program:
 *  Create a C++ program that asks the user to enter three integer values as input.
 *  Store the values into three different variables.
 *  For each variable, create an integer pointer to dynamic memory.
 *  Display the contents of the vairables and pointers.
 *  Be sure to use the new operator and delete operators to manage memory.
 */

#include <iostream>

int main(int argc, const char * argv[]) {
    //Create integer pointer to dynamic memory for three variables
    //Each new operator in the lines below allocates enough memory for a single integer
    int *ptr1 = new int;
    int *ptr2 = new int;
    int *ptr3 = new int;
    
    //Declare three variables of integer type
    int num1, num2, num3;
    
    //Program asks user to enter three integer values as input
    std::cout<<"Enter Three Integers: "<<std::endl;
    //The three input values are received and stored into three different variables
    std::cin>>num1>>num2>>num3;
    
    //Assign the pointers to the variables
    *ptr1 = num1;
    *ptr2 = num2;
    *ptr3 = num3;
    
    //Display contents of variables
    std::cout<<"Contents of Variables: "<<num1<< ", " <<num2<< " & " <<num3<<std::endl;
    //Display contents of pointers
    std::cout<<"Contents of Pointers: "<<*ptr1<< ", " <<*ptr2<< " & " <<*ptr3<<std::endl;
    
    //delete operator deallocates pointers when no longer needed
    delete ptr1;
    delete ptr2;
    delete ptr3;
    
    return 0;
}
