// this code is a revision for STD Vectors
// Author: Salah Eddine Ghamri
// Year: 2019


#include <vector>
#include <iostream>

using namespace std; 


// we define a vector of int 
vector<int> vec = {31, 42, 53, 64}; 


void vectordisplay(vector<int> a){
    for(int i = 0; i < a.size(); ++i){
        cout << "Value of the index " << i << " is " << a[i] << endl;
    }
}

int main(){

    /* 
    // print vector values using pointer
    for (vector<int>::iterator i= vec.begin(); i != vec.end(); ++i){
        cout << "Value of the vector " << *i << endl;
    } */

    /*
    // print vector values using index
    for (int i=0; i< vec.size(); ++i){
        cout << "Value of the index " << i << " is " << vec[i] << endl;
    }*/

    //-------------------
    // add values using push_back
    vec.push_back(75);

    vectordisplay(vec);

    return EXIT_SUCCESS;
}