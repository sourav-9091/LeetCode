#include <iostream>
using namespace std;

int lastIndex(int *arr, int size, int x)
{
    if (size == 0)
        return -1;

    int smallAnswer = lastIndex(arr + 1, size - 1, x);

    if (smallAnswer == -1)
    {
        if (arr[0] == x)
        {
            return 0;
        }
        return smallAnswer;
    }
    else
    {
        return smallAnswer + 1;
    }
}

int main()
{
    int arr[] = {1, 3, 3, 4, 3, 6};
    cout << lastIndex(arr, 6, 3) << endl;
    return 0;
}