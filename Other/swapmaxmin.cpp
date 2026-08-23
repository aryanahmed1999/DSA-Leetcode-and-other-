#include <iostream>
#include <climits>
using namespace std;

void swapmaxmin(int arr[] , int size){
    int max = INT_MIN, min = INT_MAX;
    int max_index = 0 ,min_index = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
            max_index = i;
        }
         if(arr[i] < min){
            min = arr[i];
            min_index = i;
        }
    }
    int temp = arr[max_index];
    arr[max_index] = arr[min_index];
    arr[min_index] = temp;
}
int main(){
    int arr[] = {3,2,5,1,7,};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "original arr\n";

    for(int i = 0 ; i < size ; i++){
        cout << arr[i] <<"\t";
    }

    swapmaxmin(arr,size);

    cout << "\nswapped array\n";
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] <<"\t";
    }
    
    return 0;
}