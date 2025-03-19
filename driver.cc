// Driver code to test the functions

/*Include the relevant .cc files when testing

    Example:
    
    #include "insertionsort.cc"
*/
#include "driver.h"

using namespace std;


// Function for testing sorting algorithms
void sorting_test(vector<int>& input_arr)
{
   /* Add the sorting algorithm function to test  
        
        Example:

        insertionSort(arr);
   */ 

    for(int num : input_arr){
        cout << num << " "; 
    }

}


/* Driver code */
int main()
{
    vector<int> arr;

    // Use a file to input the test cases.
    ifstream f("test_cases.txt");

    int x;
    while(f >> x){
        arr.push_back(x);
    }

    f.close();

    sorting_test(arr);

    return 0;
}