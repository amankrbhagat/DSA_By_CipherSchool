#include <iostream>
#include <climits>
using namespace std;

int main() {
    //int x = 5;

    // int arr[5] = {1, 2, 3, 4, 5};

    // cout << arr[2] << endl;


    // for(int i = 0; i < 5; i++) {
    //     // cout << arr[i] << " ";
    // }


///for each method
    // for(int i : arr){
    //     cout << i << " ";
    // }



    // cout << sizeof(arr) << endl;                   //it will show the total bytes it consume
    // cout << sizeof(arr)/sizeof(int) << endl;     //it will show the size of array



    // for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
    //     cout << arr[i] << " ";



// ****finding the maximum of array****

// int arr[5] = {1, 2, 3, 4, 5};

// int max = INT_MIN ;   /// for using this command we have to use this command :-  #include <climits>

//     for(int i = 0; i < 5; i++){

//         if (arr[i]>max){
//             max = arr[i];
//     }
// }
//     cout << max;
    

/////user based 

int getMax(int num[], int size){
    int max = INT_MIN;
    for (int i = 0; i < size; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

//getMin

int main() {
    int size; 
    cout<<"Enter size of array : ";
    cin>>size;
    int num[100];
    for(int i = 0; i < size; i++) {
        cin>>num[i];
    }
    cout<<"Maximum element is "<<getMax(arr,size);
}

}



