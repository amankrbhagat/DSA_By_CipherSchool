#include <iostream>
using namespace std;

void update(int n){
    n++;
}
void updateRef(int& n){
    n++;
}
                     
                     
int main() {

    // int i = 5;  //normal var

    // int&  j = i; //reference var

    // cout << i << endl;
    // i++;
    // cout << i <<endl;
    // j++;
    // cout << j << endl;
    // cout << i << endl;




    int n = 5;
    cout << "Before "<<n << endl;
    updateRef(n);
    cout << "After " << n << endl;




             
    return 0;
}