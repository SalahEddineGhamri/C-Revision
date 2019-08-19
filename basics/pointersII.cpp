// Author: Salah Eddine Ghamri 
// Year: 2019 
// Pointers II
#include<iostream>
#include<memory> // to include smart pointers

using namespace std;


struct Foo
{
    int val;
    Foo() { cout << " Creation of Foo " << endl; }
    ~Foo() { cout << " Death of Foo " << endl;}
};

void observe_shared(shared_ptr<int> pointer)
{
    shared_ptr<int> s = pointer;
    if ( s != nullptr){
        cout << "Observing shared Pointer is " << *s << endl;
    } else {
        cout << "Observing shared Pointer has expired" << endl;
    }
}

void observe_weak(weak_ptr<int> pointer)
{
    shared_ptr<int> s = pointer.lock();
    if ( s != nullptr){
        cout << "Observing weak Pointer is " << *s << endl;
    } else {
        cout << "Observing weak Pointer has expired" << endl;
    }
}

int main(){
    // simple pointer to a variable
    int i = 57;
    int* p = &i;

    cout << "--------Simple pointers ------------------------" << endl;
    cout << "The address of the variable is "<< &i << endl;
    cout << "The pointer pointing at " << p << endl; 
    cout << "The pointer value is " << *p << endl;

    // pointer of a pointer
    int** d = &p;

    cout << "--------Pointer to a pointer ------------------" << endl;
    cout <<"the varibale is " << i << " The address of the variable is "<< &i << endl;
    cout << "The pointer pointing at " << d << " the address of the pointer"<< endl; 
    cout << "The addressed pointer points at " << *d  << " the value of this address" << endl;
    cout << "is " << **d << endl;

    // null pointers
    // to ease verification if the pointer is pointing to nowhere.
    //int* g = 0;
    int* h = NULL;
    int* g = nullptr;

    // dynamic allocation
    // we allocate space in the heap not the stack
    // dynamic allocation to get the memory size that we want.
    int* y = new int;

    // the release is not automatic then you need to release it yourself.
    delete y; // release allocated memory

    // Smart pointers
    cout << "-------Smart pointers -------------------------" << endl;
    // following dynamic allocation is combersom
    // here comes the roll of smart pointers to avoid memory leaks

    
    // unique Pointer
    cout << " --------------------------- " << endl;
    // can't be copied but can transfer ownership of the variable using move.
    unique_ptr<int> m(new int(67));
    cout << *m << endl;

    unique_ptr<Foo> z(new Foo());

    z->val = 2;
    cout << z->val << endl;

    // you can't use z no more
    unique_ptr<Foo> z2 = move(z);
    z2->val = 22;
    cout << z2->val<< endl;
    
    // Shared Pointer
    cout << " --------------------------- " << endl;
    // since c++14 using is not recommeded
    //shared_ptr<Foo> a( new Foo());
    shared_ptr<Foo> a = make_shared<Foo>();
    a->val = 99;
    cout << a->val << endl;

    // extend ownership because it is shared
    shared_ptr<Foo> a1 = a;
    shared_ptr<Foo> a2 = a;

    // reset pointers
    a1 = nullptr;
    a2 = nullptr;

    // ownership does not go easily
    shared_ptr<int> l = make_shared<int>(5);
    shared_ptr<int> l1 = l;
    observe_shared(l1);
    l = nullptr;
    observe_shared(l1);

    // Weak Shared Pointer
    // loses owneship easily.
    l = make_shared<int>(55);
    weak_ptr<int> l2 = l;
    observe_weak(l2);
    l = nullptr;
    observe_weak(l2);


    return EXIT_SUCCESS;
}