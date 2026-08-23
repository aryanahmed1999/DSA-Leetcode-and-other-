#include <iostream>
using namespace std;

int linearsearch(int arr[],int size, int target){
    for(int i = 0 ; i < size ; i++){
        if (arr[i] == target){
            return i;
        }
        
    }
    return -1;

}
int main(){
    int nums[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(nums)/sizeof(nums[1]);

    cout << "enter target = "; 
    int target ; 
    cin >> target; 

    int target_index = linearsearch(nums,size,target);

    if(target_index == -1){
        cout << "Target doesnot exist";
    }else{
        cout << "Index at which number exist is " << target_index;
    }

    return 0;
}