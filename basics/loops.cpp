// This code revision of all the basics of c++ language
// Author: Salah Eddine Ghamri
// Year:2019 

#include <stdio.h>

int main(int argc, char** argv){
    // for loop
    for(int i=0; i<=10; i++){
        printf("For ... The index is %d\n", i);
    }

    //while loop
    int i = 0;
    while(i <= 10){
        printf("While... The index is %d\n", i);
        i++;
    }

    //do while
    i = 0;
    do {
        printf("Do ..while ..The index is %d\n", i);
        i++;
    } while( i <= 10);
}
