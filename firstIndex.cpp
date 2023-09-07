#include<iostream>
using namespace std;

int firstIndex(int *arr, int size, int x){
    if (size == 0) return -1;
    if (arr[0] == x) return 0;

    int smallArrayFirstIndex = firstIndex(arr+1, size-1, x);

    if (smallArrayFirstIndex == -1 ){
        return -1;
    } else {
        return smallArrayFirstIndex + 1;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    cout << firstIndex(arr, 6, 3) <<endl;
    return 0;
}