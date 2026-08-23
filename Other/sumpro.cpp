#include <iostream>
using namespace std;

float sum(float arr[], int size){
    float sum = 0;
     for(int i = 0 ; i < size ; i++){
        sum += arr[i];
    }
    return sum;
}
float product(float arr[] , int size){
    float prod =1;
    for(int i = 0; i < size ; i++){
        prod *= arr[i];
    }
    return prod;
}
int main(){
    float arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int Sums = sum(arr,size);
    int Prod = product(arr,size);
    cout << Sums;
    cout << " "<< Prod;
    
    return 0;
}