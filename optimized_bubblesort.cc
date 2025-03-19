#include "driver.h"

/* Optimized version of the bubble sort */
void optimizedBubbleSort(vector<int>& arr)
{
    int n = arr.size();
    
    for(int i = 0; i < n; i++){

        // sets a flag to check if there were any swaps
        bool flag = false;

        /*  upper limit of the loop decreases
            because the end of the array is sorted
        */  
        for(int j = 1; j < n - i; j++){
            if(arr[j - 1] > arr[j]){
                swap(arr[j - 1], arr[j]);
                flag = true;
            }   
        }

        // if no swaps occured the array is sorted
        if(!flag)
            break;

    }
}