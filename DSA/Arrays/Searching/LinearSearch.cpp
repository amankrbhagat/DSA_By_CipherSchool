#include <iostream>
using namespace std;


// int main() {
//     int key;
//     int arr[10] ={2, 4, 55, 33, 45, 40, 55, 63, 75, 90};
//     cout << "Enter the key you want to search "<<endl;
//     cin >> key;
//     for (int i =0; i < 10; i++){
//         if (key == arr[i]) {
//             cout << "Yes the key is at " << i<<endl;
//             exit(0);
//         }
        
//     }
//     cout << "Not found " << endl;
// }



bool linearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++){
      if (arr[i] == key ) {
        
        return true;
}

}
return false;
}


int main(){
    int arr[10] = {2, 4, 55, 33, 45, 40, 55, 63, 75, 90};

cout << "Enter the key you want to search "<<endl;

int key;
cin >> key;
bool found = linearSearch(arr, 10, key);

if(found){
    cout << "Key found "<< endl;
}
else {
     cout  << "Key not found "<<endl;
}
}


