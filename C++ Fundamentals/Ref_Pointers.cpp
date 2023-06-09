#include <iostream>
using namespace std;

int main(){
    int var = 10;
    cout<< &var << endl;    // address of var in memory.


    //Pointer is a variable whose value is address of another variable.


    // type *varName      //syntex.


    int *ptr;
    ptr = &var;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;    //dereferencing the pointer



}