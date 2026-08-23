#include <iostream>
using namespace std;

void changearr(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        arr[i] = 2 * arr[i];
    }
}
int main(){
    int arr[] = {1,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "original\n";
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] <<"\t";
    }

    changearr(arr,size);

    cout << "\naltered\n";
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << "\t";
    }

    return 0;
}