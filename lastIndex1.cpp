#include <iostream>
using namespace std;

int lastIndex(int *arr, int size, int x)
{
    if (size == 0)
        return -1;

    if (arr[size-1] == x){
        return size-1; 
    } 

    return lastIndex(arr + 1, size - 1, x);
}

int main()
{
    int arr[] = {1, 3, 3, 4, 3, 6};
    cout << lastIndex(arr, 6, 3) << endl;
    return 0;
}