#include<iostream>
using namespace std;

bool isArraySorted(int *arr, int size) {
    if (size == 0 || size == 1) return true;
    if (arr[0] > arr[1]) return false;
    isArraySorted(arr+1, size-1);
}

int main() {
    int arr[] = {1, 2, 10, 4, 5};
    cout<< isArraySorted(arr, 5);
    return 0;
}