// This code revision of all the basics of c++ language
// Author: Salah Eddine Ghamri
// Year:2019 

#include <iostream>
using namespace std;


int func(int a, int b){
    return a + b;
}

int main(int argc, char** argv){
    printf("The number of arguments is %d\n", argc);
    // list all arguments
    for(int j=0; j<=argc-1; j++){
        printf("Argument %d is %s\n", j, argv[j]);
    }
    return 0; 
}
