#include "driver.h"

/* Function to sort an array using Bubble Sort */
void bubbleSort(vector<int>& arr)
{
    int n = arr.size();

    for(int i = 0; i < n; i++){

        for(int j = 1; j < n; j++){

            if(arr[j - 1] > arr[j])
                swap(arr[j - 1], arr[j]);
        
        }
    }
}