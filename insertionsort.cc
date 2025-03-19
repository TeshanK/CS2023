#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr)
{
    int n = arr.size();

    for(int j = 1; j < n; j++){

        int key = arr[j];
        int i = j - 1;

        while(i >= 0 && arr[i] > key){
            arr[i + 1] = arr[i];
            i--;
        }

        arr[i + 1] = key;
    }

}

int main()
{
    vector<int> arr;

    ifstream f("test_cases.txt");

    int x;
    while(f >> x){
        arr.push_back(x);
    }

    f.close();

    insertionSort(arr);

    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}