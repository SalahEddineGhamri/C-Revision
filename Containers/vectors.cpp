// this code is a revision for STD Vectors
// Author: Salah Eddine Ghamri
// Year: 2019


#include <vector>
#include <iostream>
#include <algorithm>

using namespace std; 

// we define a vector of int 
vector<int> vec = {31, 42, 53, 64}; 

// sorting function
bool order(int i, int j) { return (i>j); }

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

    vec.push_back(31);

    vectordisplay(vec);

    // Vector limits
    cout << "limits calculation ....." << endl;

    int max{};
    int min{};

    max = *max_element(vec.begin(), vec.end());
    min = *min_element(vec.begin(), vec.end());

    cout << "the max of vec is " << max << endl;
    cout << "the min of vec is " << min << endl;

    // Sorting
    cout << "Sorting ...... " << endl;
    sort(vec.begin(), vec.end(), order);
    vectordisplay(vec);

    return EXIT_SUCCESS;
}