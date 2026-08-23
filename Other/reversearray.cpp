#include <iostream>
using namespace std;

void reversearr(char arr[] ,int size){
    char temp;
    for(int i = 0 ; i < size / 2; i++){
        temp = arr[i];
        arr[i] = arr[size - i -1];
        arr[size - i - 1] = temp;
    }
}
int main(){
    char arr[] = {'A','B','C','D'};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "original arr\n";
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << "\t";
    }
    cout << "\nswapped arr\n";
    reversearr(arr,size);
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << "\t";
    }

    return 0;
}