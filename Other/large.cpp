//smallest/largest
#include <iostream>
#include <climits>

using namespace std;

int main(){
    int nums[] = {20,0,40,11,44};
    int size = sizeof(nums) / sizeof(nums[0]);

    int small = INT_MAX, large = INT_MIN;

    for(int i = 0 ; i < size ; i++){
        if(nums[i] < small){small = nums[i];}
    }
    cout << small;

    for(int i = 0 ; i < size ; i++){
        if(nums[i] > large){large = nums[i]; }
    }
    cout << large;

    return 0;

}