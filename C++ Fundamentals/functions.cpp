#include <iostream>
using namespace std;


// returnType  functionName(dataType parameterName){         //syntex for writing a number.


// }


// void myFunc(){
//     cout << "This is my function" << endl;
    
// }

// void myFunc2(){
//     myFunc();
// }


// int main () {               //always write main function at the last.
//      //calling the function
//      myFunc2();




int power (int base, int power){
    int ans = 1;
    for(int i=1; i<= power; i++){
        ans = ans * base;
    }
    return ans;
}

int main(){
    int a , b;
    cout << "Enter the base and power"<<endl;
    cin>> a >> b;
    cout<< "Ans is : " << power(a,b);
}



