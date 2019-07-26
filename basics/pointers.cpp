// This code revision of all the basics of c++ language
// Author: Salah Eddine Ghamri
// Year:2019 

#include <iostream>
#include <string>

std::string numberChanger(int a){
    /* ++a is not a++ ;) */
    a = 999;
    return "changing number.";
}

std::string numberChanger(int *a){
    /* ++a is not a++ ;) */
    *a = 999;
    return "chaning number by pointer.";
}

std::string numberChangerbyreference(int& a){
    /* ++a is not a++ ;) */
    a = 111;
    return "chaning number by reference.";
}

int main(int argc, char** argv){
    // Pointers
    int number = 3; 
    printf("number is equal set to %d\n", number);
    number ++;
    printf("number has changed its value to %d\n", number);

    // Declare a pointer 
    int *numberPointer;
    std::cout << "the number pointer points to an address "
              << numberPointer
              << ".\n"
              << std::endl;

    // Set a pointer memory address
    numberPointer = &number;
    std::cout << "the number pointer points to an address "
            << numberPointer
            << ".\n"
            << "The value of that memory address is "
            << *numberPointer
            << ".\n"
            << std::endl;

    // Why pointers in first place ?! 
    std::cout << "Why pointers in first place ?!!" << std::endl;

    std::cout << "Number values is : " << number << std::endl;
    std::cout << "Number value if pass to changer function without pointer: "
              << number << " --> ";
    std::cout << numberChanger(number) << " --> " << number
              << ".\n";
    std::cout << "Number values is : " << number << std::endl;

    std::cout << "Number value if pass to changer function reference: "
              << number << " --> ";
    std::cout << numberChanger(&number) << " --> " << number
              << ".\n";

    std::cout << "Number value if pass to changer function pointer: "
              << number << " --> "; 
    std::cout << numberChangerbyreference(number) << " --> " << number
              << ".\n";
}