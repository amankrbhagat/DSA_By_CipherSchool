#include <iostream>
#include <climits>
using namespace std;


// **** searhing ****

bool isPresent (int arr[][4], int target, int row, int col){   // array ko jab declare kiya to column ko specify q karna padta h?
    for(int row =0; row < 3; row++){
        for (int col = 0; col < 4; col++){
            if(arr[row][col] == target){
            return true;
            }
        } 
    }
return false;
}

//row sum and find which row sum is greater.
void printSum(int arr[][4], int row, int col){
    cout << "Printing the sum => ";

    //int maxSum = 0;
    //or
    int maxSum = INT_MIN;
    int maxSumRow = 0;
    for(int row =0; row < 3; row++){
        int sum = 0;
        for (int col = 0; col < 4; col++){
            sum += arr[row][col];

        }
        if ( sum > maxSum) {
            maxSum = sum;
            maxSumRow = row;
        }
        cout << sum << " ";
    }
    cout << endl;

    cout << "The largest sum is " << maxSum <<" in row " << maxSumRow << endl;

}

// Q.  Find the largest sum in which row.
int main() {
    int arr [3][4] ={1,2,3,4,5,6,7,8,9,10,11,12};

    for (int i = 0 ; i < 3; i++) {
    for (int j = 0 ; j < 4; j++) {
        cout << arr[i][j]<< " ";
    }
    cout <<endl;

    }
    cout << "Enter the element you want to search : "<<endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3,4)){
        cout << "Element is present "<<endl;
    }
    else {
        cout <<"Element is not present "<<endl;
    }
    printSum(arr, 3, 4);
}